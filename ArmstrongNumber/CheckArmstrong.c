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
        sum = sum + (reminder * reminder * reminder);
        temp = temp/10;
    }
    if (num == sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
}
