#include "grains.h"
#include <stdint.h>

uint64_t square(uint8_t index){   //no input checking!
    if(index == 1){
        return 1;
    }
//   else if (index == 0) { 
//        return 0; 
//    }
    return 2 * square(index - 1);
}
uint64_t total(void){return square(65) - 1;}  //hardcoded!!! 

/*
uint64_t square(uint8_t index){
    uint64_t power = index - 1;
    uint64_t result = 1;
    for(uint64_t i = 0; i < power; i++){
        result *= 2;
    }
    return result;
}
*/

