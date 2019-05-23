#include "gpio.h"

void gpio_init(enum pin_ID pin, uint8_t dir) {
    uint8_t port = (uint8_t)((pin & 0xFF00) >> 8);
    uint8_t bit = (uint8_t)(pin & 0x00FF);

    SYSCTL_RCGCGPIO_R |= port;  //enable port
    if (port == 0x01) {
        if (dir == INPUT) {
            GPIO_PORTA_DIR_R &= ~bit;  //0: input, 1: output
        } 
        else if (dir == OUTPUT) {
            GPIO_PORTA_DIR_R |= bit;   //0: input, 1: output
        }
        GPIO_PORTA_AFSEL_R &= ~bit;    //alternate function
        GPIO_PORTA_DR2R_R |= bit;      //2mA drive
        GPIO_PORTA_PDR_R |= bit;       //pull-down resistor
        GPIO_PORTA_DEN_R |= bit;       //enable pin
        GPIO_PORTA_AMSEL_R &= ~bit;    //analog functionality
        GPIO_PORTA_IM_R &= ~bit;       //interrupt mask - 0: mask, 1: don't mask
    }
    else if (port == 0x02) {
        if (dir == INPUT) {
            GPIO_PORTB_DIR_R &= ~bit;  //0: input, 1: output
        } 
        else if (dir == OUTPUT) {
            GPIO_PORTB_DIR_R |= bit;   //0: input, 1: output
        }
        GPIO_PORTB_AFSEL_R &= ~bit;    //alternate function
        GPIO_PORTB_DR2R_R |= bit;      //2mA drive
        GPIO_PORTB_PDR_R |= bit;       //pull-down resistor
        GPIO_PORTB_DEN_R |= bit;       //enable pin
        GPIO_PORTB_AMSEL_R &= ~bit;    //analog functionality
        GPIO_PORTB_IM_R &= ~bit;       //interrupt mask - 0: mask, 1: don't mask
    }
    else if (port == 0x04) {
        if (dir == INPUT) {
            GPIO_PORTC_DIR_R &= ~bit;  //0: input, 1: output
        } 
        else if (dir == OUTPUT) {
            GPIO_PORTC_DIR_R |= bit;   //0: input, 1: output
        }
        GPIO_PORTC_AFSEL_R &= ~bit;    //alternate function
        GPIO_PORTC_DR2R_R |= bit;      //2mA drive
        GPIO_PORTC_PDR_R |= bit;       //pull-down resistor
        GPIO_PORTC_DEN_R |= bit;       //enable pin
        GPIO_PORTC_AMSEL_R &= ~bit;    //analog functionality
        GPIO_PORTC_IM_R &= ~bit;       //interrupt mask - 0: mask, 1: don't mask
    }
    else if (port == 0x08) {
        if (dir == INPUT) {
            GPIO_PORTD_DIR_R &= ~bit;  //0: input, 1: output
        } 
        else if (dir == OUTPUT) {
            GPIO_PORTD_DIR_R |= bit;   //0: input, 1: output
        }
        GPIO_PORTD_AFSEL_R &= ~bit;    //alternate function
        GPIO_PORTD_DR2R_R |= bit;      //2mA drive
        GPIO_PORTD_PDR_R |= bit;       //pull-down resistor
        GPIO_PORTD_DEN_R |= bit;       //enable pin
        GPIO_PORTD_AMSEL_R &= ~bit;    //analog functionality
        GPIO_PORTD_IM_R &= ~bit;       //interrupt mask - 0: mask, 1: don't mask
    }
    else if (port == 0x10) {
        if (dir == INPUT) {
            GPIO_PORTE_DIR_R &= ~bit;  //0: input, 1: output
        } 
        else if (dir == OUTPUT) {
            GPIO_PORTE_DIR_R |= bit;   //0: input, 1: output
        }
        GPIO_PORTE_AFSEL_R &= ~bit;    //alternate function
        GPIO_PORTE_DR2R_R |= bit;      //2mA drive
        GPIO_PORTE_PDR_R |= bit;       //pull-down resistor
        GPIO_PORTE_DEN_R |= bit;       //enable pin
        GPIO_PORTE_AMSEL_R &= ~bit;    //analog functionality
        GPIO_PORTE_IM_R &= ~bit;       //interrupt mask - 0: mask, 1: don't mask
    }
    else if (port == 0x20) {
        if (dir == INPUT) {
            GPIO_PORTF_DIR_R &= ~bit;  //0: input, 1: output
        } 
        else if (dir == OUTPUT) {
            GPIO_PORTF_DIR_R |= bit;   //0: input, 1: output
        }
        GPIO_PORTF_AFSEL_R &= ~bit;    //alternate function
        GPIO_PORTF_DR2R_R |= bit;      //2mA drive
        GPIO_PORTF_PDR_R |= bit;       //pull-down resistor
        GPIO_PORTF_DEN_R |= bit;       //enable pin
        GPIO_PORTF_AMSEL_R &= ~bit;    //analog functionality
        GPIO_PORTF_IM_R &= ~bit;       //interrupt mask - 0: mask, 1: don't mask
    }
}

void gpio_set(enum pin_ID pin, uint8_t val) {
    uint8_t port = (uint8_t)((pin & 0xFF00) >> 8);
    uint8_t bit = (uint8_t)(pin & 0x00FF);

    if (port == 0x01) {
        if (val == 0) {
            GPIO_PORTA_DATA_R &= ~bit;
        }
        else if (val == 1) {
            GPIO_PORTA_DATA_R |= bit;
        }
    }
    else if (port == 0x02) {
        if (val == 0) {
            GPIO_PORTB_DATA_R &= ~bit;
        }
        else if (val == 1) {
            GPIO_PORTB_DATA_R |= bit;
        }
    }
    else if (port == 0x04) {
        if (val == 0) {
            GPIO_PORTC_DATA_R &= ~bit;
        }
        else if (val == 1) {
            GPIO_PORTC_DATA_R |= bit;
        }
    }
    else if (port == 0x08) {
        if (val == 0) {
            GPIO_PORTD_DATA_R &= ~bit;
        }
        else if (val == 1) {
            GPIO_PORTD_DATA_R |= bit;
        }
    }
    else if (port == 0x10) {
        if (val == 0) {
            GPIO_PORTE_DATA_R &= ~bit;
        }
        else if (val == 1) {
            GPIO_PORTE_DATA_R |= bit;
        }
    }
    else if (port == 0x20) {
        if (val == 0) {
            GPIO_PORTF_DATA_R &= ~bit;
        }
        else if (val == 1) {
            GPIO_PORTF_DATA_R |= bit;
        }
    }
}
