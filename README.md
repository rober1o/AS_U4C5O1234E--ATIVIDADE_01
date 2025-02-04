# Atividade - Semáforo com Temporização

Este projeto foi desenvolvido para aprimorar o conhecimento sobre temporização utilizando a função add_repeating_timer_ms() do Pico SDK. A simulação foi realizada no **Wokwi** e testada na placa **BitDogLab**.

## Componentes Utilizados

1. **Microcontrolador:** Raspberry Pi Pico W
2. **LEDs:** 3 LEDs (Vermelho, Amarelo e Verde)
3. **Resistores:** 3 resistores de 330 Ω
4. **Ferramentas:** Wokwi (Simulador) e BitDogLab

## Funcionalidade

O semáforo segue a seguinte sequência de funcionamento:

1.O LED vermelho acende por 3 segundos e depois apaga.

2.O LED amarelo acende por 3 segundos e depois apaga.

3.O LED verde acende por 3 segundos e depois apaga.

O ciclo se repete indefinidamente.

A transição entre os LEDs é controlada pelo temporizador, utilizando a função de call-back repeating_timer_callback(). Além disso, a cada segundo, uma mensagem é enviada pela porta serial informando que passou 1 segundo.

### Como Usar

#### Usando o Simulador Wokwi

- Clone este repositório: git clone https://github.com/rober1o/AS_U4C5O1234E--ATIVIDADE_01.git;
- Usando a extensão Raspberry Pi Pico importar o projeto;
- Compilar o código e clicar no arquivo diagram.json.

#### Usando a BitDogLab

- Clone este repositório: git clone https://github.com/rober1o/AS_U4C5O1234E--ATIVIDADE_01.git;
- Usando a extensão Raspberry Pi Pico importar o projeto;
- Compilar o projeto;
- Plugar a BitDogLab usando um cabo USB e gravar o código.



## Demonstração

<!-- TODO: adicionar link do vídeo -->
Vídeo demonstrando as funcionalidades da solução implementada na BitDogLab: [Demonstração](https://youtu.be/Kasw2gwiqng)
