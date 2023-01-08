/*
Flow Instructions
Break: Controlled end of the compiler. This is an 
intruction of control flow, and limits the run of a
code block, or even de program itself.
Continue: Controlled force of a next iteration in in
a loop statement. This instruction can only be used in
while, for, do_while statements.
GoTo: Controlled pointer to a line of code, this
intruction it's going to send the compiler to a specific
line in the code. This is a fragile line that can be
really exploidable line and it's more of a panic button
for an especific case in the code.
*/

#include <stdio.h>

typedef enum{false, true} bool;

int main(){

    bool exprBreak = false;
    bool exprContinue = true;
    bool exprGoTo = true;
    int number;

    printf("Este programa imprime las 10 iteraciones realizadas\n");

    for(number = 1; number < 10; number++){
        if(exprBreak){
            printf("Se ha detenido el programa con un break\n");
            break;
        }

        if(exprContinue)
            printf("Se ha saltado la iteracion con un continue\n");
            exprContinue = false;

        if(exprGoTo)
            printf("Se ha redireccionado empleando goto\n");
            exprGoTo = false;
            goto Handler;

        printf("Iteracion: %d\n", number);
    }
    return 0;
    Handler : printf("Se ha salido del codigo");
}