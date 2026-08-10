/*Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14.*/
#include <stdio.h>
int main()
{
    int a,b,c,sum,t,x;
    x = 0;
    for(c=1;c<100000;c++)
    {
        t=c;
        sum  = 0;
       for(;t!=0;)
       {
            b = t%10;
            t = t/10;
            sum = sum+b;
       }
       if(sum==14)
       {
         x = x+1;
       }
   }
   
   printf("the number is:%d",x);
    
    return 0;
}