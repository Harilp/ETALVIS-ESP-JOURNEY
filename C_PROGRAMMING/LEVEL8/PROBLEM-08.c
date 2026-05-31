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
    int b,c,d,e,f,g,h,sum;
    c=1;
    b=a;
    while(a>9)
    {
        a=a/10;
        c=c*10;
    }
    d=b/c;//1
    e=b%c;//2345
    g=e;
    g=(g/10)*10;//234
    f=e%10;//5
    h=(e%g)*c;//50000
    sum=h+g+d;
    return sum;
}