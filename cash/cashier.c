#include<stdio.h>

int getValue();

void main(){

    float change = getValue();
    void getChange(int height);
}

//Get initial value as input
int getValue()
{
    int cents;
    do
    {
        printf("Enter amount: \n");
        scanf("%d", &cents);
    }
    while (cents < 1);
   
    return cents;
}

//calculate the change
void getChange(int change){

}