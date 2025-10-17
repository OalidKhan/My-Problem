#include<stdio.h>
int main()
{
    int N,min;
    scanf("%d",&N);
    int arr[N];
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(int i=0 ; i<N ; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("%d",min);

    return 0;
}
