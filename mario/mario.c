#include <stdio.h>

int getValue();
void draw(int height);

int main(void)
{
    int height = getValue();
    draw(height);
}

//method to get the value input value
int getValue()
{
    int a;
    do
    {
        printf("get height\n");
        scanf("%d", &a);
    }
    while (a < 1 || a > 8);
   
    return a;
}

//method to draw the pyramid
void draw(int height)
{

    for (int i = 0; i < height; i++)
    {
        //creates indentations to form pyramid
        for (int spaces = i + 1; spaces < height; spaces++)
        {
            printf(" ");
        }
        //draws the actual pyramid
        for (int j = height + i + 1; j > height; j--)
        {
            printf("#");
        }
    printf("  ");
    
    //creates the other side of pyramid
            for (int j = height + i + 1; j > height; j--)
        {
            printf("#");
        }
        printf("\n");
    }
}
