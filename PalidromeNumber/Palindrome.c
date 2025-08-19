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
        sum = (sum*10) + reminder;
        temp = temp/10;
    }
    if (num==sum)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }

    return 0;
}
