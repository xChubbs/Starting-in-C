/*
For Statement
The code block inside this statement it's going to run for a determined
number of times.
For this statement it's important to know the number of iterations
needed to run, it's the most used to run through a list / array
*/

#include <stdio.h>

int main(){
    
    // Init of variables.
    int maxIterations = 5;
    int iter = 0;

    for(iter = 1; iter <= maxIterations; iter++)
        printf("Esta es la ejecucion %d de este ciclo\n", iter);

    printf("El bucle for acaba de terminar");
    return 0;
}