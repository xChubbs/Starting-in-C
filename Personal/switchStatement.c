/*
Switch Case Expresion
In this case, the use of this expresion is mainly to reduce the flow
and the use of if statements.
This expresion works with constant value, it's the total reduce of an
if statement, made to control states of a program
*/

// Inclusion of the standard library
#include <stdio.h>            

// Init of the main function
int main(){                     
    
    // Init of the expresion value
    int userInt;

    printf("You have come a long Journey, please select a companion:\n");
    printf("Please select between 1, 2 or 3: ");
    scanf("%d", &userInt);

    switch (userInt){
        case 1:
            printf("This is the first option\n");
            printf("Now take this cat, for your journey\n");
            break;
        case 2:
            printf("This is the second option\n");
            printf("Now take this duck, for your journey\n");
            break;
        case 3:
            printf("This is the third option\n");
            printf("Now take this dog, for your journey\n");
            break;
        default:
            printf("This in neither of the options\n");
            printf("You choose war instead\n");
            break;
    }
    return 0;
}