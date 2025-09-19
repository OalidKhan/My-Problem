#include<stdio.h>
int main()
{
    long long int N;
    scanf("%lld",&N);
    for (int r=1 ; r<=N ; r++)
    {
        for (int s=r ; s<N ; s++)
        {
            printf(" ");
        }
        for (int c=1 ; c<=r ; c++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for (int r=N ; r>=1 ; r--)
    {
        for (int s=r ; s<N ; s++)
        {
            printf(" ");
        }
        for (int c=1 ; c<=r ; c++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}
