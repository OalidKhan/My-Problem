#include<stdio.h>
int main()
{
    int N,first=2,second=1,lucas;
    printf("Enter the ending number: ");
    scanf("%d",&N);
    printf("%d %d ",first,second);
    for (int i=3 ; i<=N ; i++)
    {
        lucas = first + second;
        first = second;
        second = lucas;
        printf("%d ",lucas);
    }

return 0;
}
