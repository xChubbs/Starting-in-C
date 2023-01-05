/*
Do While Statement
The code block inside this statement it's going to constatly going to 
repeat itself while the expresion it's true, the moment the control 
expresion it's evaluated false, the while will break and the code will
continue running normally.
The importance comes from the early initialization of the block of code
inside the statement
*/

#include <stdio.h>

// Creation of boolean variable
typedef enum{false, true} bool;

int main(){
    
    // Init of variables.
    bool expr = false;
    int counter = 0;

    do{
        // Control Flow of the While cycle
        if(counter > 5)
            expr = false;
        
        // Code during execution
        counter = counter + 1;
        printf("Esta es la ejecucion %d de este ciclo\n", counter);
    } while(expr);
    

    printf("El bucle do while acaba de terminar");
    return 0;
}