#include<stdio.h>
int main()
{
    int N,first=0,second=1,fibo,count=0;
    printf("Enter the ending number: ");
    scanf("%d",&N);
    while(count<N)
    {
        if(count<=1)
            fibo=count;
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ",fibo);
        count++;
    }

    return 0;
}
