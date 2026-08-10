/*Write a loop program to print the sum of two‑digit odd numbers whose ten’s digit is 7.
Function Name: disp_2digit_odd_sum_tens7*/
#include <stdio.h>
void disp_2digit_odd_sum_tens7(int);
int main()
{
    disp_2digit_odd_sum_tens7(99);
}
void disp_2digit_odd_sum_tens7(int n)
{
    int x,a,b;
    a=0;
    for(x=10;x<=n;x++)
    {
        if((x%2))
        {
            b=x/10;
            if(b==7)
            {
                a=a+x;
            }
        }
    }
    printf("%d",a);
}