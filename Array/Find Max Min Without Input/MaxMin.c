#include<stdio.h>
int main()
{
    int Numbers[] = {5,20,100,-60,69,98,105};
    int Max = Numbers[0];
    int Min = Numbers[0];
    for (int i=1 ; i<7 ; i++)
    {
        if (Max < Numbers[i])
        {
            Max = Numbers[i];
        }
    }
    for (int i=1 ; i<7 ; i++)
    {
        if (Min > Numbers[i])
        {
            Min = Numbers[i];
        }
    }
    printf("The maximum number is %d\n",Max);
    printf("The minimum number is %d",Min);
    
    return 0;
}
