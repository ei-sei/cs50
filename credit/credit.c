#include<stdio.h>
#include<math.h>

/*
TODO:
-prompt for input
-calculate checksum.
-check for card length and starting digits
-print  AMEX, MASTERCASRD, VISA, or invalid
*/

int getValue();

int main(void)
{
    int height = getValue();
}

//method to get the value input value
int getValue()
{
    int a;
    do
    {
        printf("Enter credit card number:\n");
        scanf("%d", &a);
    }
    while (a < 1 || a > 8);
   
    return a;
}