#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/clocks.h"

// created libraries
#include "libs/led.h"
#include "libs/matrix.h"
#include "libs/buttons.h"
#include "pio_matrix.pio.h"
#include "libs/animation.h"


// call of functions
static void gpio_irq_handler(uint gpio, uint32_t events);// function of  interruption

// global variables
PIO pio;
uint sm;
int counter = 0;
float intensity = 0.5f;
bool pressed_a = false;
bool pressed_b = false;

// MAIN PROGRAM
int main()
{
    // set value of variables
    pio = pio0;
    frame draw;
    double r = 0.0, b = 0.0, g = 0.0;

    init_led(); // initializate LED RGB
    init_buttons(); // initializate BUTTONS: A AND B
    stdio_init_all(); // init default SDK

    // configurations of the PIO
    uint offset = pio_add_program(pio, &pio_matrix_program);
    sm = pio_claim_unused_sm(pio, true);
    pio_matrix_program_init(pio, sm, offset, LED_PIN);

    // configuration to interruption on buttons: A and B
    gpio_set_irq_enabled_with_callback(BUTTONA, GPIO_IRQ_EDGE_FALL, 1, &gpio_irq_handler);
    gpio_set_irq_enabled(BUTTONB, GPIO_IRQ_EDGE_FALL, true);
    draw_number(pio, sm, intensity, counter);

    while (true) {
        if(pressed_a || pressed_b) 
        {
            if (pressed_a)
            {
                pressed_a = false;
                pressed_b = false;
                printf("Botão A poressionado!\n");
                counter += 1;
                printf("Valor de A: %d\n", counter);
                draw_number(pio, sm, intensity, (counter % 10));
            }
            if (pressed_b) 
            {
                pressed_b = false;
                pressed_a = false;
                printf("Botão B poressionado!\n");
                counter -= 1;
                printf("Valor de A: %d\n", counter);
                draw_number(pio, sm, intensity, (counter % 10));
            }
        }
        led_blink_1s();
    }
}

/* IMPLEMENTED FUNCTIONS */

// function of interruption in buttons A and B
static void gpio_irq_handler(uint gpio, uint32_t events) {
    // detect interruption on button A
    if (!gpio_get(BUTTONA)) {
        pressed_a = true;
        pressed_b = false;
    }
    // detect interruption on button B
    if (!gpio_get(BUTTONB))
    {
        pressed_b = true;
        pressed_a = false;
    }
}
