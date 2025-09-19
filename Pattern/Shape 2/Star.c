#include<stdio.h>
int main()
{
    int N;
    printf("Enter N = ");
    scanf("%d",&N);
    for (int r=1 ; r<=N ; r++)
    {
        for (int c=1 ; c<=r ; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int r=N-1 ; r>=1 ; r--)
    {
        for (int c=1 ; c<=r ; c++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
