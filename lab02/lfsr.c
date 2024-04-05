#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"


uint16_t get_next_MSB(uint16_t *reg){
     uint16_t MSB = *reg & 1;
     MSB ^= (*reg >> 2) & 1;
     MSB ^= (*reg >> 3) & 1;
     MSB ^= (*reg >> 5) & 1;
     return MSB;
}

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    (*reg)>>=1;
    (*reg)|=(get_next_MSB(reg)<<15);
}

