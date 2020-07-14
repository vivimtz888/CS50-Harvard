#include <cs50.h>
#include <stdio.h>

void puts_hashes(int n);
void puts_spaces(int n);

int main(void)
{
    //prompt the user for the height
    //only accepting from 1-8, no negative, only integer
    int height, spaces, hashes;
    do
    {
        height = get_int("Height of the pyramid: \n");
    }
    while (height < 1 || height > 8);

    //defining the number of spaces and hashes
    spaces = height - 1;
    hashes = 1;

    //first loop for printing each of the row
    //adding hashes and decreasing spaces
    for (int i = 0; i < height; i++)
    {
        puts_spaces(spaces);
        puts_hashes(hashes);
        printf("\n");
        hashes++;
        spaces--;
    }

}

//Functions to print the hashes and spaces

void puts_hashes(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}


void puts_spaces(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}