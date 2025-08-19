#include<stdio.h>
int main()
{
    int num,temp,sum=0,reminder;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp = num;
    while (temp!=0)
    {
        reminder = temp%10;
        sum = sum+reminder;
        temp = temp/10;
    }
    printf("The summation is= %d",sum);


    return 0;
}
