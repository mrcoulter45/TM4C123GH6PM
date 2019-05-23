#ifndef __GPIO_H__
#define __GPIO_H__

#include <stdint.h>
#include "../tm4c123gh6pm.h"

#define INPUT  0
#define OUTPUT 1

enum pin_ID {
    PA0 = 0x0101,
    PA1 = 0x0102,
    PA2 = 0x0104,
    PA3 = 0x0108,
    PA4 = 0x0110,
    PA5 = 0x0120,
    PA6 = 0x0140,
    PA7 = 0x0180,

    PB0 = 0x0201,
    PB1 = 0x0202,
    PB2 = 0x0204,
    PB3 = 0x0208,
    PB4 = 0x0210,
    PB5 = 0x0220,
    PB6 = 0x0240,
    PB7 = 0x0280,

    PC0 = 0x0401,
    PC1 = 0x0402,
    PC2 = 0x0404,
    PC3 = 0x0408,
    PC4 = 0x0410,
    PC5 = 0x0420,
    PC6 = 0x0440,
    PC7 = 0x0480,

    PD0 = 0x0801,
    PD1 = 0x0802,
    PD2 = 0x0804,
    PD3 = 0x0808,
    PD4 = 0x0810,
    PD5 = 0x0820,
    PD6 = 0x0840,
    PD7 = 0x0880,

    PE0 = 0x1001,
    PE1 = 0x1002,
    PE2 = 0x1004,
    PE3 = 0x1008,
    PE4 = 0x1010,
    PE5 = 0x1020,
    PE6 = 0x1040,
    PE7 = 0x1080,

    PF0 = 0x2001,
    PF1 = 0x2002,
    PF2 = 0x2004,
    PF3 = 0x2008,
    PF4 = 0x2010,
    PF5 = 0x2020,
    PF6 = 0x2040,
    PF7 = 0x2080
};

void gpio_init(enum pin_ID pin, uint8_t dir);
void gpio_set(enum pin_ID pin, uint8_t val);

#endif // __GPIO_H__
