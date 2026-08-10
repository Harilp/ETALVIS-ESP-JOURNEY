/*Write a program to get a number from the user and print the total number of single-digit prime numbers in the number.

Function Name: disp_single_digit_prime*/
#include <stdio.h>
int disp_single_digit_prime(int);
int main()
{
    int a,b;
    printf("Enter the nubmer:");
    scanf("%d",&a);
    b=disp_single_digit_prime(a);
    printf("%d",b);
}
int disp_single_digit_prime(int a)
{
    int b,c,d,r,g;
    
    g=0;
    while(a!=0 && a>1)
    {
        b=2;
        r=a%10;
        d=1;
    if(r==1)
    {
        d=0;
        goto x;
    }
    for(b=2;b<=r-1;b++)
    {
        c=r%b;
        if(c==0)
        {
            d=0;
            break;
        }
    }
    x:
    if(d==1)
    {
        g=g+1;
    }
    a=a/10;
    }
    return g;
}