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
    int count_letters, count_words, count_sentences;
    count_letters = 0;
    count_words = 0;
    count_sentences = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        //count the number of letters (lowercase from a to z or uppercase from A to Z)
        if (isalpha(text[i]))
            count_letters++;
        //count the number of words (sequence of characters separated by spaces)
        if ((i == 0 && text[i + 1] != ' ') || (i != len - 1 && text[i] == ' ' && text[i + 1] != ' '))
            count_words++;
        //count the number of sentences (period, exclamation point or question mark)
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            count_sentences++;
    }

    float L = count_letters / (count_words / 100)

                                  float index = 0.0588 * L - 0.296 * S - 15.8;

    printf("%d letters(s)\n", count_letters);
    printf("%d word(s)\n", count_words);
    printf("%d sentence(s)\n", count_sentences);

    //Grade rounded to the nearest integer
    //if grade higher >=16 output -> print "Grade 16+"
    //if grade <1 output -> print "Before Grade 1"

    //output
    //printf("Grade %s \n", grade);
}
