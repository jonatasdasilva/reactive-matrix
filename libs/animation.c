#include <stdlib.h>
#include "animation.h"

// colors
const pixel black = {0, 0, 0};
const pixel red = {252, 6, 6};
const pixel purple = {10, 0, 10};

void draw_number(PIO pio, uint sm, float intensity, int number)
{
    frame frames[10] = {
        {// number 0
            // linha 1
            black,
            red,
            red,
            red,
            black,
            //     // linha 2
            black,
            red,
            black,
            red,
            black,
            //     // linha 3
            black,
            red,
            black,
            red,
            black,
            //     // linha 4
            black,
            red,
            black,
            red,
            black,
            //     // linha 5
            black,
            red,
            red,
            red,
            black,
        },
        {// number 1
            // linha 1
            black,
            black,
            red,
            black,
            black,
            //     // linha 2
            black,
            red,
            red,
            black,
            black,
            //     // linha 3
            black,
            black,
            red,
            black,
            black,
            //     // linha 4
            black,
            black,
            red,
            black,
            black,
            //     // linha 5
            black,
            red,
            red,
            red,
            black,
        },
        { //number 2
            // linha 1
            black,
            red,
            red,
            red,
            black,
            //     // linha 2
            black,
            black,
            black,
            red,
            black,
            //     // linha 3
            black,
            red,
            red,
            red,
            black,
            //     // linha 4
            black,
            red,
            black,
            black,
            black,
            //     // linha 5
            black,
            red,
            red,
            red,
            black,
        },
        { //number 3
            // linha 1
            black,
            red,
            red,
            red,
            black,
            //     // linha 2
            black,
            black,
            black,
            red,
            black,
            //     // linha 3
            black,
            red,
            red,
            red,
            black,
            //     // linha 4
            black,
            black,
            black,
            red,
            black,
            //     // linha 5
            black,
            red,
            red,
            red,
            black,
        },
        {//number 4
            // linha 1
            black,
            red,
            black,
            red,
            black,
            //     // linha 2
            black,
            red,
            black,
            red,
            black,
            //     // linha 3
            black,
            red,
            red,
            red,
            black,
            //     // linha 4
            black,
            black,
            black,
            red,
            black,
            //     // linha 5
            black,
            black,
            black,
            red,
            black,
        },
        {//number 5
            // linha 1
            black,
            red,
            red,
            red,
            black,
            //     // linha 2
            black,
            red,
            black,
            black,
            black,
            //     // linha 3
            black,
            red,
            red,
            red,
            black,
            //     // linha 4
            black,
            black,
            black,
            red,
            black,
            //     // linha 5
            black,
            red,
            red,
            red,
            black,
        },
        {//number 6
            // linha 1
            black,
            red,
            red,
            red,
            black,
            //     // linha 2
            black,
            red,
            black,
            black,
            black,
            //     // linha 3
            black,
            red,
            red,
            red,
            black,
            //     // linha 4
            black,
            red,
            black,
            red,
            black,
            //     // linha 5
            black,
            red,
            red,
            red,
            black,
        },
        {//number 7
            // linha 1
            black,
            red,
            red,
            red,
            black,
            //     // linha 2
            black,
            black,
            black,
            red,
            black,
            //     // linha 3
            black,
            black,
            black,
            red,
            black,
            //     // linha 4
            black,
            black,
            black,
            red,
            black,
            //     // linha 5
            black,
            black,
            black,
            red,
            black,
        },
        {//number 8
            // linha 1
            black,
            red,
            red,
            red,
            black,
            //     // linha 2
            black,
            red,
            black,
            red,
            black,
            //     // linha 3
            black,
            red,
            red,
            red,
            black,
            //     // linha 4
            black,
            red,
            black,
            red,
            black,
            //     // linha 5
            black,
            red,
            red,
            red,
            black,
        },
        {//number 9
            // linha 1
            black,
            red,
            red,
            red,
            black,
            //     // linha 2
            black,
            red,
            black,
            red,
            black,
            //     // linha 3
            black,
            red,
            red,
            red,
            black,
            //     // linha 4
            black,
            black,
            black,
            red,
            black,
            //     // linha 5
            black,
            red,
            red,
            red,
            black,
        },
    };
    switch (number)
    {
    case 0:
        draw_pio(frames[number], pio, sm, intensity);
        break;
    
    case 1:
        draw_pio(frames[number], pio, sm, intensity);
        break;

    case 2:
        draw_pio(frames[number], pio, sm, intensity);
        break;
    
    case 3:
        draw_pio(frames[number], pio, sm, intensity);
        break;

    case 4:
        draw_pio(frames[number], pio, sm, intensity);
        break;

    case 5:
        draw_pio(frames[number], pio, sm, intensity);
        break;
    
    case 6:
        draw_pio(frames[number], pio, sm, intensity);
        break;

    case 7:
        draw_pio(frames[number], pio, sm, intensity);
        break;
        
    case 8:
        draw_pio(frames[number], pio, sm, intensity);
        break;
        
    case 9:
        draw_pio(frames[number], pio, sm, intensity);
        break;
    
    default:
        break;
    }
}