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
                return 1;
            }
        }
    }
    else if (argc < 2 || argc > 2)
    {
        printf("Usage: ./caesar key\n");
        //retunr from main a value of 1 (which tends to signify an error)
        return 1;
    }

    //4. output plaintext: (without a new line) printf
    //prompt the user for a string of plaintext get_string

    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    //5. iterate through every character to change it --> for

    int k = atoi(argv[1]);

    //printf("%i", k);


    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char pl = plaintext[i];


        if (isalpha(plaintext[i]))
        {
            // check if it is uppercase
            if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                char p = plaintext[i] - 65;
                char c = (p + k) % 26;
                char encrypted_upper = c + 65;
                printf("%c", encrypted_upper);
            }
            //check if it is downcase
            else if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                char p = plaintext[i] - 97;
                char c = (p + k) % 26;
                char encrypted_lower = c + 97;
                printf("%c", encrypted_lower);
            }
        }
        // print out the rotated character (lowcase and uppercase preserve) - non-alphabetical preserve
        else
        {
            printf("%c", pl);
        }

    }
    //printf a new line
    printf("\n");






    //output ciphertext: (without a new line) with the plaintext in ciphertext


}