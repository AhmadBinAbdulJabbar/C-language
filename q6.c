// Write a program to calculate the sum of 10 numbers. Use array for storing 10 numbers.
#include<stdio.h>

int main()
{
    int num[10];
    int temp = 0;
    printf("Enter 10 Numbers: \n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j+1];
                num[j+1] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("The sorted array is: \n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d",num[i]);
    }
    getch();
}

