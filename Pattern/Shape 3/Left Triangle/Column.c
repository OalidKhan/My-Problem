#include<stdio.h>
int main()
{
    int N;
    printf("Enter N = ");
    scanf("%d",&N);
    for (int r=1 ; r<=N ; r++)
    {
        for (int s=r ; s<N ; s++)
        {
            printf(" ");
        }
        for (int c=1 ; c<=r ; c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }

    return 0;
}
