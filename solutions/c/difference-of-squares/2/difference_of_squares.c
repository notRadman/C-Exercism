#include "difference_of_squares.h"

unsigned int sum(unsigned int number){
    return number * (number + 1) / 2;
}
unsigned int square_of_sum(unsigned int number){
    unsigned int numsum =  sum(number);
    return numsum * numsum;
}

unsigned int sum_of_squares(unsigned int number){
    unsigned int n = number;
    unsigned int result = n * (n + 1) * (2 * n + 1) / 6;
    return result;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number); 
}
