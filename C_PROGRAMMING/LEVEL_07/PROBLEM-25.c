/*Write a program to get a number from the user and print the total number of single‑digit prime numbers in the number.

Function Name: disp_single_digit_prime*/
#include <stdio.h>
void disp_single_digit_prime(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    disp_single_digit_prime(a);
    return 0;
}
void disp_single_digit_prime(int u)
{
    int a,b,x,c;
    c=0;
    while(u!=0)
    {
    x=u%10;
    b=1;
    if(x>=2)
    {
        for(a=2;a<=(x-1);a++)
    {
        if((x%a)==0)
        {
            b=0;
            break;
        }
    }
    }
    else
    {
        b=0;
    }
 
    if(b==1)
    {
        c=c+1;
    }
    u=u/10;
    }
    printf("%d",c);
}
