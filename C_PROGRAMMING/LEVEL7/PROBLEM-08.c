/*Write a loop program to print the two‑digit even numbers whose sum of digits is 6.
Function Name: disp_2digit_even_sum6*/
#include <stdio.h>
void disp_2digit_even_sum6(int);
int main()
{
    disp_2digit_even_sum6(99);
}
void disp_2digit_even_sum6(int n)
{
    int x,a,b;
    for(x=10;x<=n;x++)
    {
        if((x%2)==0)
        {
            a=x%10;
            b=x/10;
            if((a+b)==6)
            {
                printf("%d\n",x);
            }
        }
    }
}