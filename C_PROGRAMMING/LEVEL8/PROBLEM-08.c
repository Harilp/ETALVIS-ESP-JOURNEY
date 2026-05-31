/*Write a program to get a number from the user and interchange the first and last digits, then print the result.
Function Name: disp_interchange_first_last_digit*/
#include <stdio.h>
int disp_interchange_first_last_digit(int);
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=disp_interchange_first_last_digit(a);
    printf("%d",b);
}
int disp_interchange_first_last_digit(int a)
{
    int b,c,d,e,f,g,sum;
    c=1;
    b=a;
    while(a>9)
    {
        a=a/10;
        c=c*10;
    }
    d=b/c;
    e=b%c;
    f=(e%10)*c;
    g=(e/10)*10;
    sum=f+g+d;
    return sum;
}