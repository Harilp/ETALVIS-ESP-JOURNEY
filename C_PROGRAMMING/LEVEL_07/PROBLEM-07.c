/*Write a loop program to print the two‑digit odd numbers whose sum of digits is 7.
Function Name: disp_2digit_odd_sum7*/
#include <stdio.h>

void disp_2digit_odd_sum7(int);
int main()
{
    disp_2digit_odd_sum7(99);
}
void disp_2digit_odd_sum7(int n)
{
    int x;
    int a,b;
    for(x=10;x<=n;x++)
    {
        if((x%2))
        {
            b=x%10;
            a=x/10;
            if((a+b)==7)
            {
                printf("%d\n",x);
            }

        }
    }

}