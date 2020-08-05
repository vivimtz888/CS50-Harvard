#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //prompt the user for a command line -> non-negative integer
    int dec_digit;

    //1. do while k = no command-line or with more than one
    //printf = error & return from main = 1 (error)
    if (argc == 2)
    {
        // printf("%c",argv[1][0]);

        //2. for -iterate to check if not a decimal digit -> print Usage::./ceasar key and return from main a value of 1
        for (int i = 0, len = strlen(argv[1]); i < len; i++)
        {
            if (isdigit(argv[1][i]))
            {
                //3. Convert command-line argument from string to int (int)
                dec_digit = atoi(argv[1]);
            }
            else
            {
                printf("Usage: ./caesar key\n");
            }
        }
    }
    else if (argc < 2 || argc > 2)
    {
        printf("Usage: ./caesar key\n");
    }

    //4. output plaintext: (without a new line) printf
    //prompt the user for a string of plaintext get_string
    //5. iterate through every character to change it --> for
    // print out the rotated character (lowcase and uppercase preserve) - non-alphabetical preserve
    //output ciphertext: (without a new line) with the plaintext in ciphertext
    //printf a new line and return 0 from main
}