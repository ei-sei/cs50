#include <stdio.h>

int main(void)
{ 
    int height, i, j;
    do
    {
        printf("please give me a height between 1-8: ");
        //height = GetInt();
        scanf("%d", &height);
    }    
    while (height < 1 || height > 8);

    printf("Height is = %d\n", height);    
    for (i = 0; i < height; i++) {

        for (j = 0; j < height - i - 1; j++)
            printf(" ");
        for (j = 0; j < i + 2; j++)
            printf("#");

        printf("\n");
    }
}

//https://www.programiz.com/c-programming/examples/pyramid-pattern