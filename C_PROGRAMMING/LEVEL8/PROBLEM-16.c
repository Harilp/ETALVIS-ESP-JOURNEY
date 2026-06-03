/*Write a program to print the biggest 4-digit number which is divisible by 7 and 9.
Function Name: disp_biggest_4digit_div7_9*/
#include <stdio.h>
int disp_biggest_4digit_div7_9(int);
int main()
{
    int a,b;
    a=9999;
    b=disp_biggest_4digit_div7_9(a);
    printf("%d",b);
}
int disp_biggest_4digit_div7_9(int a)
{
    int b,c;
    for(;a>=1000;a--)
    {
        b=a%7;
        c=a%9;
        if(b==0 && c==0)
        {
            return a;
        }
    }
    return -1;//if not found any number
}