#ifndef LED_H
#define LED_H

#define PIN_13 13

#include <stdio.h>
#include "pico/stdlib.h"

void led_on();
void led_off();
void init_led();
void led_blink_1s();

#endif