#include "led.h"

// Função de inicialização dos pinos do LED RGB
void init_led()
{
    // a função init: inicializa as GPIO: 11, 12 e 13.
    gpio_init(PIN_13);
    // a função set_dir seta a direção das GPIOs: 11, 12 e 13, como de saída
    gpio_set_dir(PIN_13, GPIO_OUT);
}

// Função que liga o led no PIO (pino) indicado
void led_on()
{
    gpio_put(PIN_13, true); // Ativa (liga) o LED na cor desejada
}

// Função que desliga o led no PIO (pino) indicado
void led_off()
{
    gpio_put(PIN_13, false); // Desativa (desliga) o LED na cor do pino indicado
}

void led_blink_1s() {
    for (uint8_t i = 0; i < 5; i++)
    {
        led_on();
        sleep_ms(50);
        led_off();
        sleep_ms(150);
    }
}