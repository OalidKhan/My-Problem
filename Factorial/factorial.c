#include<stdio.h>
int main()
{
    long long int num,i,factorial=1;
    printf("Enter any positive number: ");
    scanf("%lld",&num);
    for ( i=1 ; i<num ; i++ )
    {
        factorial = factorial * i;
        printf("%lld * ",i);
    }
    factorial = factorial * num;
    printf("%lld = %lld",num,factorial);

    return 0;
}

