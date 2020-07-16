#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // prompt user for an amount of change
    //only non-negative input
    //round cents to nearest penny
    float dollars;
    int changed_owed, coins;

    do
    {
        dollars = get_float("How much change is owed:\n");
    } while (dollars < 0);

    //round cents to nearest penny
    changed_owed = round(dollars * 100);
    //printf("%i\n", changed owed);

    //track of coins used

    coins = 0;

    //25CENTS
    while (changed_owed >= 25)
    {
        //TRACK OF THE REMAINING CHANGE
        changed_owed = changed_owed - 25;
        coins++;
    }

    //10 CENTS
    while (changed_owed >= 10)
    {
        changed_owed = changed_owed - 10;
        coins++;
    }

    //5 CENTS
    while (changed_owed >= 5)
    {
        changed_owed = changed_owed - 5;
        coins++;
    }

    //1 CENT
    while (changed_owed >= 1)
    {
        changed_owed = changed_owed - 1;
        coins++;
    }

    printf("Number of coins used:%i\n", coins);
}
