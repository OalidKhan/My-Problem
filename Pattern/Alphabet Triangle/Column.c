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
            printf("%c ",c+64);
        }
        printf("\n");
    }

    return 0;
}
