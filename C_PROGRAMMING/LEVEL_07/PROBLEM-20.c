/*Write a program to print the total number of single-digit prime numbers.

Function Name: disp_2digit_even_sum6*/
#include <stdio.h>
void disp_total_single_digit_prime(int);
int main()
{
    disp_total_single_digit_prime(2);
    
    return 0;
}
void disp_total_single_digit_prime(int x)
{
    int a,b,c;
    c=0;
    for(x=2;x<=9;x++)
    {
        b=1;
        for(a=2;a<=(x-1);a++)
        {
            if((x%a)==0)
            {
            b=0;
            break;
            }
        }
            if(b==1)
            {
            c=c+1;
            }
    }
    printf("%d\n",c);
    
}
