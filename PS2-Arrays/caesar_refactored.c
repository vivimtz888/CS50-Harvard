#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2 || !check_valid_key(argv[1]))
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    int key = atoi(argv[1]);
    string plaintext = get_string("plainext: ");

    printf("ciphertext: ");

    for (int i = 0; i < strlen(plaintext); i++)

}