#include <stdio.h>
#include <math.h>

/*
TODO:
-prompt user for an amount of change.
-Convert dollars to cents 
-user the largest coins possible, keeping track of coins used.
-print the number of coins
*/

float getValue();
int coins(int cents);

int main(void)
{
    float owed = getValue();
    int cents = round(owed * 100);
    printf("%d\n", coins(cents));
}

//Get initial value as input
float getValue(void)
{
    float change;
    do
    {
        printf("Change owed: \n");
        scanf("%f", &change);
    } while (change < 0.00);
    return change;
}


//calculate the amount of coins
int coins(int cents)
{
    int i = 0;
    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            i++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            i++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            i++;
        }
        else
        {
            cents -= 1;
            i++;
        }
        
    }
    return i;
}