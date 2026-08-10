/*Write a program to get a number from the user and print the total number of single-digit perfect square numbers in the number.
Function Name: disp_single_digit_square*/
#include <stdio.h>
int disp_single_digit_square(int);
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=disp_single_digit_square(a);
    printf("%d",b);
}
int disp_single_digit_square(int a)
{
    int b,c;
    c=0;
    while(a!=0)
    {
        b=a%10;
        if(b==1 || b==4 || b==9)
        {
            c=c+1;
        }
        a=a/10;
    }
    return c;
}