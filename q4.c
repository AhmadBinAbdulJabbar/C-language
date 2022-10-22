// Write a program to calculate the sum of 10 numbers. Use array for storing 10 numbers.
#include<stdio.h>

int main()
{
    int num[10];
    int greatest = 0,position = 0;
    printf("Enter 10 Numbers: \n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
    }

    greatest = num[1];
    for(int j = 0; j < 10; j++)
    {
        if(greatest < num[j])
        {
            greatest = num[j];
            position = j;
        }
    }

    printf("The Greatest Number is %d at position %d ",greatest,position);
    getch();
}
