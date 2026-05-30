/*Write a loop program to print the sum of two-digit numbers whose one’s digit is 5.
Function Name: disp_2digit_ones5*/
#include <stdio.h>
int disp_2digit_ones5(int);//function prototype
int main()
{
    int a,b;
    b=10;
    a=disp_2digit_ones5(b);//function call
    printf("%d",a);
}
int disp_2digit_ones5(int x)//function
{
    int a,b;
    b=0;
    while(x<=99)
    {
        a=x%10;
        if(a==5)
        {
            b=b+x;
        }
        x++;
    }
    return b;
}