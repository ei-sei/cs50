#include <stdio.h>

int getValue();
void draw(int height);

int main(void)
{
    int height = getValue();
    draw(height);
}

int getValue()
{
    int a;
    do
    {
        printf("get height");
        scanf("%d", &a);
    }
    while (a < 1 || a > 8);
   
    return a;
}

void draw(int height)
{

    for (int i = 0; i < height; i++)
    {

        for (int spaces = i + 1; spaces < height; spaces++)
        {
            printf(" ");
        }
        
        for (int hashes = height + i + 1; hashes > height; hashes--)
        {
            printf("#");
        }
        printf("\n");
    }
}