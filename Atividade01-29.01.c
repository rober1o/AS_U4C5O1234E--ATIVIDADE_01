#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#define LED_RED 11
#define LED_YELLOW 12
#define LED_GREEN 13

uint i = 0;

void iniciar_pinos() {
    gpio_init(LED_RED);
    gpio_init(LED_YELLOW);
    gpio_init(LED_GREEN);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_set_dir(LED_YELLOW, GPIO_OUT);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
}

// Callback do timer, chamado a cada 3 segundos
bool repeating_time_callback(struct repeating_timer *t) {
    printf("PASSARAM SE 3 SEGUNDOS\n");
    if (i == 0){
        // desliga o led amarelo e verde e liga o vermelho
        gpio_put(LED_YELLOW, false);
        gpio_put(LED_GREEN, false);
        gpio_put(LED_RED, true);
        i++;
    }else if(i== 1){
        // desliga o Led vermelho e verde, e liga o amarelo
        gpio_put(LED_RED, false);
        gpio_put(LED_GREEN, false);
        gpio_put(LED_YELLOW, true);
        i++;
    }else if (i == 2){
        // desliga o led amarelo e vermelho e liga o verde
        gpio_put(LED_YELLOW, false);
        gpio_put(LED_RED, false);
        gpio_put(LED_GREEN, true);
        i = 0;
    }

    return true;  // Retorna true para manter o timer rodando
}

int main() {
    iniciar_pinos();   // inicia os pinos
    stdio_init_all();
 
    struct repeating_timer timer;

    // Configura um timer que chama o callback a cada 3000 ms (3 segundos)
    add_repeating_timer_ms(3000, repeating_time_callback, NULL, &timer);

    while (true) {
        // imprime mensagem informado a cada segundo
        printf("Passou 1 segundo\n");
        sleep_ms(1000);
    }
}

