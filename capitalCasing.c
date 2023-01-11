/*
Jaden Smith, the son of Will Smith, is the star of films such as 
The Karate Kid (2010) and After Earth (2013). Jaden is also known 
for some of his philosophy that he delivers via Twitter. When writing 
on Twitter, he is known for almost always capitalizing every word. For 
simplicity, you'll have to capitalize each word, check out how contractions 
are expected to be in the example below.
Your task is to convert strings to how they would be written by Jaden Smith.
The strings are actual quotes from Jaden Smith, but they are not capitalized 
in the same way he originally typed them.

The following code it's a function that converts a unformatted string into a 
capitalized string.
*/

#include <stdio.h>
#include <string.h>

char *capitalCase(char *capital, const char *string){

    size_t index, len = strlen(string);
    
    for(index = 0; index < len; index ++){

        if('a' <= string[index] && string[index] <= 'z'){

            if(string[index -1] == ' ' || index == 0){
                capital[index] = string[index] - 32;
                continue;
            }
        }
        capital[index] = string[index];
    }
    capital[index] = '\0';

    return capital;
}

void main(){

    char result[100];
    const char test[] = "this is Not a brief test!\0";

    capitalCase(result, test);

    printf(result);
}
