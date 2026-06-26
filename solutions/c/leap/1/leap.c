#include <stdio.h>
#include "leap.h"

/*
 A leap year (in the Gregorian calendar) occurs:

- In every year that is evenly divisible by 4.
- Unless the year is evenly divisible by 100, in which case it's only a leap year if the year is also evenly divisible by 400.

*/
bool leap_year(int year){
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return true;
            }
        }  
        else{return true;}
    }
    return false;
}

/*
bool leap_year(int year){
    if(year % 4 == 0 || (year % 4 == 0 && year % 400 == 0 && !(year % 100 == 0))){
       return true; 
    }
    return false;
    }
int main(){
    int notLeap = 1955;
    int leap = 2012;
    int notLeap1 = 1977;    //not divisible by 4
    int notLeap2 = 1900;    //divisible by 100 but not 400

    printf("%d -> %d/n", notLeap, leap_year(notLeap));
    printf("%d -> %d/n", leap, leap_year(leap));
    printf("%d -> %d/n", notLeap1, leap_year(notLeap1));
    printf("%d -> %d/n", notLeap2, leap_year(notLeap2));

    return 0;
}
*/
