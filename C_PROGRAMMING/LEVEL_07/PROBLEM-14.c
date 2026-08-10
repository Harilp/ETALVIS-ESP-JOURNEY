/*  
Write a program to get a number from the user and interchange the first and last digits, then print the result.

Function Name: disp_interchange_first_last_digit*/
#include <stdio.h>
void disp_interchange_first_last_digit(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    disp_interchange_first_last_digit(a);
}
void disp_interchange_first_last_digit(int n)
{
    int a,b,c,d,e,f,g;
    c=1;
    a=n;
    while(n>9)
    {
        n=n/10;
        c=c*10;
    }
    b=a/c;
    d=a%c;
    e=(d%10)*c;
    f=(d/10)*10;
    g=e+f+b;
    printf("%d",g);

}