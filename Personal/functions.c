/*
Functions
Encapsulated code blocks, defined to be later called in the
compiler. This utility gives a specific logic a name, so then
when needed can be simply called, eliminating repeating lines
in the compilation.
*/

#include <stdio.h>

int power(int number, int pow);

void main(){
    
    int iter;
    int pow;
    int base = 2;

    for(iter = 0; iter < 5; iter++){
        
        pow = power(base, iter);
        printf("En la iteracion %d, de alcanzo el valor:\t%d\n", iter, pow);
    }
}

int power(int base, int pow){

    int iter;
    int result = 1;

    for(iter = 0; iter < pow; iter++)
        result = result * base;

    return result;
}