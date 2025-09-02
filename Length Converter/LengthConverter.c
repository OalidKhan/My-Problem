#include<stdio.h>
int main()
{
    float inch,cm;
    printf("Enter your value in INCH: ");
    scanf("%f",&inch);
    cm = inch * 2.54;
    printf("Length in CM: %.2f",cm);

    return 0;
}
