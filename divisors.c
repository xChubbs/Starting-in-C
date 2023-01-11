/*
Create a function named divisors/Divisors that takes an 
integer n > 1 and returns an array with all of the 
integer's divisors(except for 1 and the number itself), 
from smallest to largest. If the number is prime return 
the string '(integer) is prime' (null in C#) (use Either 
String a in Haskell and Result<Vec<u32>, String> in Rust).
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void divisors(unsigned number, size_t *length, unsigned array[]){

    *length = 0;

    for(unsigned div = 2; div < number; div++){

        if(number % div == 0){
            array[*length] = div;
            (*length) ++;
        }
    }
    
    if(*length == 0)
        array = NULL;
}
 

void main(){
    
    unsigned number = 10;
    unsigned array[10];
    size_t *length;
    *length = 10;
    

    divisors(number, length, array);

    for (int index = 0; index < 2; index++){
        printf("divisor: %d\n", array[index]);
    }
    printf("the size is: %d", *length);
}
