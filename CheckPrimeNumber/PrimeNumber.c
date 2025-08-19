#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter any positive number: ");
    scanf("%d",&num);
    if (num<=1)
        count++;

    for ( i=2 ; i<=num/2 ; i++)
    {
        if ( num%i==0 )
        {
            count++;
            break;

        }
    }
    if (count==0)
        printf("%d is Prime Number.\n",num);
    else
        printf("%d is not Prime Number.\n",num);

    return 0;
}
