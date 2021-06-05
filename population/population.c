#include<stdio.h>

int main(){

    int start;
    do
    {
        printf("Starting population?\n");
        scanf("%d", &start);
    } 
    while (start < 9);

    int end;
    do
    {
        printf("Ending population?\n");
        scanf("%d", &end);
    } 
    while (end < start);

    int years = 0;

    while (start < end)
    {
        start = start + (start /3) - (start/4);
        years++;
    }

    printf("Years: %i\n", years);
        
}