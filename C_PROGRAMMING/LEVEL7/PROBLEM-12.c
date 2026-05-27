/*Write a program to get a number from the user and print the sum of all digits.
Function Name: disp_sum_all_digits*/
#include <stdio.h>
void disp_sum_all_digits(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    disp_sum_all_digits(a);
}
void disp_sum_all_digits(int n)
{
    int a,b;
    b=0;
    while(n!=0)
    {
        a=n%10;
        b=b+a;
        n=n/10;

    }
    printf("%d",b);
}