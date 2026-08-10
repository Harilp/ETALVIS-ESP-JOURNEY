/*Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14.  
Function Name: disp_count_sum14*/
#include <stdio.h>
void disp_count_sum14(int);
int main()
{
    int a;
    a=1;
    disp_count_sum14(a);
    return 0;
}
void disp_count_sum14(int a)
{
    int b,c,d,e;
    e=0;
    while(a<100000)
    {
        b=a;
        c=0;
        while(b!=0)
        {
            d=b%10;
            b=b/10;
            c=c+d;
        }
         if(c==14)
            {
                e=e+1;
            }
            a++;
    }
    printf("%d",e);
}