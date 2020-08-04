#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(int n);

int main(void)
{
    //prompt the user for a string of text
    string text = get_string("Text: ");
    //printf("Text: %s \n",text);

    int count_letters, count_words, count_sentences;
    count_letters = 0;
    count_words = 0;
    count_sentences = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        //count the number of letters (lowercase from a to z or uppercase from A to Z)
        if (isalpha(text[i]))
        {
            count_letters++;
        }

        //count the number of words (sequence of characters separated by spaces)
        if ((i == 0 && text[i + 1] != ' ') || (i != len - 1 && text[i] == ' ' && text[i + 1] != ' '))
        {
            count_words++;
        }

        //count the number of sentences (period, exclamation point or question mark)
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count_sentences++;
        }
    }

    float L = (count_letters / (float)count_words) * 100;
    float S = (count_sentences / (float)count_words) * 100;

    //Grade rounded to the nearest integer
    int index = roundf(0.0588 * L - 0.296 * S - 15.8);

    //if grade higher >=16 output -> print "Grade 16+"

    if (index >= 16)
    {
        printf("Grade 16+\n");
        //if grade <1 output -> print "Before Grade 1"
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
        //output
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
