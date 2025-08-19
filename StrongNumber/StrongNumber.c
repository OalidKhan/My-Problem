#include<stdio.h>
int main()
{
    int num,sum=0,reminder,temp,factorial;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp = num;
    while (temp!=0)
    {
        reminder = temp % 10;
        factorial = 1;

        for (int i=1 ; i<=reminder ; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        temp = temp / 10;
    }
    if ( sum==num )
        printf("The number is Strong Number");
    else
        printf("The number is Not Strong Number");

    return 0;
}
