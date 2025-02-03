# 👨🏻‍💻 Projeto: Reactive Matrix

É implementado um sistema para controla uma matriz de LEDs 5x5 WS2812, aplicado para a placa BitDogLab com Raspberry Pi Pico W (RP2040). Ele captura interrupções, com tratativa de _debouncing_ via software e exibe um número de 0 a 9 na matriz de LEDs. 

## 📑 Descrição do Projeto

Nesse projeto é implementado as funcionalidades solicitadas, as quais realiza as seguintes ações:  

- Piscar (blinking) no LED RGB SMD5050, onde pisca 5 vezes por segundo;
- Interrupções nos botões A e B da placa BitDogLab;
- Exibição de números de 0 a 9 na matriz de LEDs WS2812B (5x5)
- Alterar o número exibido ao pressionar os botões: A e B;
- Aplicar _debouncing_ via software, para impedir leituras inconsistentes dos botões;

Neste projeto é utilizado:

- Pico SDK
- Linguagem C
- SMD5050 (LED RGB)
- Interrupções (IRQ)
- WS2812B (LEDs endereçáveis)
- Raspberry Pi Pico W (RP2040)

## 🎯 Objetivos

Compreender através da implementação de interrupções no Raspberry Pi Pico W com RP2040, onde é aplicado técnica de _debouncing_, via software, para evitar acionamentos indesejados ou trepidação dos botões. E através do acionamento das interrupções, realizar manipulação da matriz de LEDs WS2812B, para exibição dos números de 0 a 9. Sendo então, desenvolvido um projeto completo que implementa o software necessário para operação das funcionalidades requisitadas.

## 📌 Funcionalidades

1. **Piscar o LED RGB (SMD5050) na cor vermelha**;
2. **Botão A incrementa o número a ser exibido na matriz (5x5 de WS2812B)**;
3. **Botão B decrementa o número a ser exibido na matriz (5x5 de WS2812B)**;
4. **Matriz de LEDs RGB WS2812NB exibe os números de 0 a 9**.

## ✅ Conclusão

Com o uso das **interrupções** programadas nos botões: A e B, da placa **BitDogLab**, e a aplicação de técnicas de **debouncing**, permite-nos ter uma garantia de resposta rápida e precisa para as operações a serem executadas pelos botões.
