#include <stdio.h>
#include <stdlib.h>
#include <math.h>   //not required    
#include <time.h>
#include "main.h"

int main(void) //int main() is not a valid signature in C
{
    srand((unsigned int)(time(NULL)));
    int i;
    char pass[13]; //extra byte for null terminating character

    printf("Press enter to get a twelve-character password\n");
    getchar();

    for (i = 0; i < 4; i++) 
{
        //revised logic to generate random characters at all positions (0 - 11)
        pass[ 3 * i ] = '0' + (rand() % 10); //generating numeric character
        char capLetter = 'A' + (rand() % 26); //generating upper case alpha character
        pass[(3 * i) + 1] = capLetter;
        char letter = 'a' + (rand() % 26); //generating lower case alpha character
        pass[(3 * i) + 2] = letter;
}
    pass[3 * i] = '\0'; //placing null terminating character at the end
    printf("generated password : %s\n\n",pass); //printing the string

    printf("\n\n");
}


