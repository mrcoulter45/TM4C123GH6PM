#include "timer.h"

void wait_ms(uint32_t ms) {
    for (uint32_t i = (ms * 3212); i > 0; i -= 1) {
        continue;
    }
}
