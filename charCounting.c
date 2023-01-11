/*
Check to see if a string has the same amount of 'x's 
and 'o's. The method must return a boolean and be case 
insensitive. The string can contain any char.
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool wordCounting(char *string, char letter1, char letter2){

    int counter = 0;

    for(int index = 0; string[index] != '\0'; index ++){

        if(tolower(string[index]) == tolower(letter1))
            counter++;

        if(tolower(string[index]) == tolower(letter2))
            counter--;
    }
    return (counter == 0) ? true : false;
}

void main(){

    char word[] = "ooxXm\0";
    char letter1 = 'x';
    char letter2 = 'o';

    bool result = wordCounting(word, letter1, letter2);

    printf(result ? "true" : "false");
}