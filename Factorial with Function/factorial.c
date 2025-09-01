#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for (int i=1 ; i<=x ; i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d",fact);
    return fact;
}

int main()
{
    int N;
    printf("Enter any number: ");
    scanf("%d",&N);
    factorial(N);

    return 0;
}
