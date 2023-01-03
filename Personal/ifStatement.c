/*
If Expresions
in this particular practice, the boolean it's defined before it's used,
in C language we don't know what a boolean is, but we know how to
compare statements and create expresions that represents a boolean
value.
The if expresion helps to create an expresion based flow
*/

// Inclusion of the standard library
#include <stdio.h>            

// Definition of a new type
typedef enum{false, true} bool; 

// Init of the main function
int main(){                     
    
    // Init of the expresion value
    bool expr = true;
    // Init of the input value
    int userInt;

    if(expr)
        printf("The expresion evaluated it's true\n");
    else
        printf("The expresion evaluated it's false\n");

    printf("\nThis let us create flow, for example take a number\n");
    printf("Numbers = 1, 2 or 3: ");

    // Input of a value
    scanf("%i", &userInt);

    printf("\nNow see that you choice has an impact in the flow\n");

    if(userInt == 1){
        printf("This is the first print\n");
        printf("Now take this duck, for your journey\n");
    }
    else if(userInt == 2){
        printf("This is the second print\n");
        printf("Now take this cat, for your journey\n");
    }
    else if(userInt == 3){
        printf("This is the third print\n");
        printf("Now take this dog, for your journey\n");
    }
    else{
        printf("You choose war, instead.");
    }
    return 0;
}