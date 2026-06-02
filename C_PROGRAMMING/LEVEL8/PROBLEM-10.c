/*Write a program to print the total number of single-digit prime numbers.
Function Name: disp_single_digit_prime*/
#include <stdio.h>
int disp_single_digit_prime(int);
int main()
{
   int a,b;
   a=2;
   b=disp_single_digit_prime(a);
   printf("%d",b);
}
int disp_single_digit_prime(int a)
{
     int b,c,d,e;
    e=0;
   while(a<9)
   {
        b=2;
        d=1;
        for(b=2;b<=a-1;b++)
        {
            c=a%b;
            if(c==0)
            {
                d=0;
                break;
            }
        }
        if(d==1)
        {
            e=e+1;
        }
        a++;
   }
   return e;
}