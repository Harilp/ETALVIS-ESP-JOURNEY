/*Write a program to get a number from the user and print the total number of two-digit perfect square numbers in the number.
Function Name: disp_two_digit_square*/
#include <stdio.h>
int disp_two_digit_square(int);
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=disp_two_digit_square(a);
    printf("%d",b);
}
int disp_two_digit_square(int a)
{
    int b,c;
    c=0;
    while(a>9)
    {
        b=a%100;
        if(b==16 || b==25 || b==36 || b== 49 || b==64 || b== 81)
        {
            c=c+1;
        }
        a=a/10;
    }
    return c;
}