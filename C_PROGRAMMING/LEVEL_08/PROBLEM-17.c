/*Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14.

Function Name: disp_count_sum14*/
#include <stdio.h>
int disp_count_sum14(int);
int main()
{
    int a,b;
    a=99999;
    b=disp_count_sum14(a);
    printf("%d",b);   
}
int disp_count_sum14(int a)
{
    int b,c,d,f,temp;
    f=0;
    for(b=1;b<=a;b++)
    {
        d=0;
        temp=b;
        while(temp!=0)
        {
            c=temp%10;
            d=d+c;
            temp=temp/10;

        }
        if(d==14)
            {
                f=f+1;
            }
    }
    return f;
}