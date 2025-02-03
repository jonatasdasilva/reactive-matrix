#ifndef MATRIX_H
#define MATRIX_H

#include <stdint.h>
#include "hardware/pio.h"

#define PIXELS 25
#define LED_PIN 7 // GPIO of MATRIX Of THE LEDS (WS2812B)

extern float intensity;

typedef struct
{
    uint8_t red;
    uint8_t green;
    uint8_t blue;
} pixel;

typedef pixel frame[PIXELS];

// functipon generate color and intensity
uint32_t matrix_rgb(uint r, uint g, uint b, float intensity);

// function drawing in matrix of the LEDs WS2812B
void draw_pio(pixel *draw, PIO pio, uint sm, float intensity);

#endif