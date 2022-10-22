// Write a program to calculate the sum of 10 numbers. Use array for storing 10 numbers.
#include<stdio.h>

int main()
{
    int num[10];
    int total;
    printf("Enter 10 Numbers: \n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
        total = total + num[i];
    }

    printf("The Total of 10 numbers entered is %d: ",total);
    getch();
}
