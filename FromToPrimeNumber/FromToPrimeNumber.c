#include<stdio.h>
int main()
{
    int num,i,count,total=0,sum=0,m,n;
    printf("Enter starting number= ");
    scanf("%d",&m);
    printf("Enter ending number= ");
    scanf("%d",&n);
    for ( num=m ; num<=n ; num++ )
    {
        count=0;
        if(num==1)
            count++;
        else
        {
            for ( i=2 ; i<num ; i++ )
            {
                if ( num%i==0 )
                {
                    count++;
                    break;
                }
            }
            if(count==0)
            {
                printf("%d ",num);
                total++;
                sum = sum + num;
            }
        }
    }
    printf("\nTotal prime numbers between 1 to 100: %d\n",total);
    printf("Sum of prime numbers= %d\n",sum);
    return 0;
}
