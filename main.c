#include "tm4c123gh6pm.h"

int main(void) {
    enum pin_ID array_A[8] = {PF0, PF1, PF2, PF3, PF4, PF5, PF6, PF7};
    for (int i = 0; i < 8; i += 1) {
        gpio_init(array_A[i], OUTPUT);
        gpio_set(array_A[i], 0);
    }
    while (1) {
        for (int i = 0; i < 8; i += 1) {
            gpio_set(array_A[i], 0);
            wait_ms(100);
            gpio_set(array_A[i], 1);
            wait_ms(100);
            gpio_set(array_A[i], 0);
            wait_ms(100);
            gpio_set(array_A[i], 1);
            wait_ms(100);
            gpio_set(array_A[i], 0);
            wait_ms(100);
        }
    }
}
