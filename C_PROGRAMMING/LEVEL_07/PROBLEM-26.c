/*Write a program to print the biggest 4‑digit number which is divisible by 7 and 9.  
Function Name: disp_biggest_4digit_div7_9*/
#include <stdio.h>
void disp_biggest_4digit_div7_9(int);
int main()
{
    int a;
    disp_biggest_4digit_div7_9(a);
    return 0;
}
void disp_biggest_4digit_div7_9(int a)
{
    int b,c,d;
    for(a=9999;a>=1000;a--)
    {
        b=a%7;
        c=a%9;
        if(b==0 && c==0)
        {
            goto x;
        }
    }
    x:
    printf("%d",a);
}