/*Write a loop program to print the sum of two‑digit numbers whose one’s digit is 5.
Function Name: disp_2digit_ones5*/
#include <stdio.h>
void disp_2digit_ones5(int);
int main()
{
    disp_2digit_ones5(99);
    
    return 0;
}
void disp_2digit_ones5(int n)
{
    int x,a,b;
    a=0;
    for(x=10;x<=n;x++)
    {
        b=x%10;
        if(b==5)
        {
            a=a+x;
        }
    }
    printf("%d",a);
}