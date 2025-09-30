#include<stdio.h>
int main()
{
    int Numbers[] = {5,20,100,-60,69,98,105};
    int SearchNum , Found = -1;
    scanf("%d",&SearchNum);
    for(int index=0 ; index<7 ; index++)
    {
        if(Numbers[index] == SearchNum)
        {
            Found = index;
            break;
        }
    }
    if(Found==-1)
    {
        printf("%d is not found",SearchNum);
    }
    else
    {
        printf("%d is found in position %d",SearchNum, Found);
    }
    
    return 0;
}
