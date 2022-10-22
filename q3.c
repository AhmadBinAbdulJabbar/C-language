// Write a program to calculate the sum of 10 numbers. Use array for storing 10 numbers.
#include<stdio.h>

int main()
{
    int num[10];
    int odd =0,even = 0;
    printf("Enter 10 Numbers: \n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
        if(num[i] % 2)
        {
            odd = odd + num[i];
        }
        else
        {
            even = even + num[i];
        }

    }

    printf("The Sum of even numbers is %d \n",even);
    printf("The Sum of odd numbers is %d \n",odd);

    getch();
}
