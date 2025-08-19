#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        num = num/10;
        count++;
    }
    printf("Total number of digit: %d",count);

    return 0;
}
