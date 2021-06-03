#include <stdio.h>

int main(void)
{ 
    int height, i, j;
    do
    {
        printf("please give me a height between 1-23: ");
        height = GetInt();
    }    
    while (height < 1 || height > 23);

    printf("\n");    
    for (i = 0; i < height; i++) {

        for (j = 0; j < height - i - 1; j++)
            printf(" ");
        for (j = 0; j < i + 2; j++)
            printf("#");

        printf("\n");
    }
}