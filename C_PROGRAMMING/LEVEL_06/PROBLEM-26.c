/*Write a program to print the biggest 4‑digit number which is divisible by 7 and 9.*/
#include <stdio.h>
int main()
{
    int a,b,c,d;
    a=9999;
    while(a>=1000)
    {
        b=a%7;
        c=a%9;
        if(b==0 && c==0)
        {
            d=a;
            goto n;
        }
        a--;
    }
    n:
    printf("%d",d);
    return 0;
}