/*Write a program to get a number from the user and print the total number of two-digit odd numbers present in that number.
Function Name: disp_total_2digit_odd*/
#include <stdio.h>
int disp_total_2digit_odd(int);
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=disp_total_2digit_odd(a);
    printf("%d",b);
}
int disp_total_2digit_odd(int a)
{
    int b,c;
    b=0;
    while(a>9)
    {
        c=a%100;
        if((c%2))
        {
            b=b+1;
        }
        a=a/10;
    }
    return b;
}