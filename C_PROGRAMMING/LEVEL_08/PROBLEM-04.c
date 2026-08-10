/*Write a loop program to print the sum of two-digit odd numbers whose ten’s digit is 7.
Function Name: disp_2digit_odd_sum_tens7*/
#include <stdio.h>
int disp_2digit_odd_sum_tens7(int);
int main()
{
    int a,b;
    b=10;
    a=disp_2digit_odd_sum_tens7(b);
    printf("%d",a);
    return 0;
}
int disp_2digit_odd_sum_tens7(int a)
{
    int b,c;
    c=0;
    while(a<=99)
    {
        if((a%2))
        {
            b=a/10;
            if(b==7)
            {
                c=c+a;
            }
        }
        a++;
    }
    return c;
}