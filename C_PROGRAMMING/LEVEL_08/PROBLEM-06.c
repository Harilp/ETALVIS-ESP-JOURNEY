/*Write a program to get a number from the user and print the sum of all its digits.
Function Name: disp_sum_all_digits*/
#include <stdio.h>
int disp_sum_all_digits(int);
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=disp_sum_all_digits(a);
    printf("%d",b);
}
int disp_sum_all_digits(int a)
{
    int b,c,d;
    b=0;
    while(a!=0)
    {
        c=a%10;
        a=a/10;
        b=b+c;
    }
    return b;
}