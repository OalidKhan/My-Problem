#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,reminder,GCD,LCM;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    n1 = num1;
    n2 = num2;
    while (  n2!=0 )
    {
        reminder = n1 % n2;
        n1 = n2;
        n2 = reminder;
    }
    GCD = n1;
    LCM = (num1 * num2)/GCD;
    printf("GCD = %d\n",GCD);
    printf("LCM = %d",LCM);

    return 0;
}
