#include "buttons.h"
#include "pico/stdlib.h"

void init_buttons() {
    // inicializar o botão de interrupção - GPIO5
    gpio_init(BUTTONA);
    gpio_set_dir(BUTTONA, GPIO_IN);
    gpio_pull_up(BUTTONA);

    // inicializar o botão de interrupção - GPIO6
    gpio_init(BUTTONB);
    gpio_set_dir(BUTTONB, GPIO_IN);
    gpio_pull_up(BUTTONB);
}