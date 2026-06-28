#include "collatz_conjecture.h"

int steps(int start){
    if (start < 1){ return ERROR_VALUE; }

    int stepsNum = 0;
    int process = start;
    while(process != 1){
        if(process % 2 == 0){
            process = process / 2;
        } else {
        process = (process * 3) + 1;
        }
        stepsNum++;
    }
    
    return stepsNum;
}

