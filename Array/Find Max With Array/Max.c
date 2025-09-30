#include<stdio.h>
int main()
{
    int i,s;
    int Numbers[s];
    int Max = Numbers[0];
    scanf("%d",&i);
    for(s=0 ; s<i ; s++)
    {
        scanf("%d",&Numbers[s]);
    }
    for (int index=1 ; index<s ; index++)
    {
        if (Max < Numbers[index])
        {
            Max = Numbers[index];
        }
    }
    
    printf("The maximum number is %d\n",Max);
    
    return 0;
}
