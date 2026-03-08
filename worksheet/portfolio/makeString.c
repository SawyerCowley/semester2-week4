
/*
Name:
Student ID:
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {
    int i;
    char buffer[50];
    // define appropriate data to hold your answer
    for (i = 0; i < argc; i ++) {
        //string conncatenate adds buffer almost like a running product
        strcat(buffer, argv[i]);  
        //adds on hyphen until last value
        if (i < argc - 1) {      
            strcat(buffer, "-");  
        }
    }
    // process the command-line data using appropriate string functions

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}