/*write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14*/
#include <stdio.h>
int main()
{
    int a,b,c,e,f;
    a=1;
    f=0;
    while(a<100000)
    {
        c=a;
        e=0;
        while(c!=0)
        {
            b=c%10;
            c=c/10;
            e=e+b;
        }
        if(e==14)
        {
            f=f+1;
        }
        a++;
    }
    printf("the number is %d",f);
    return 0;
}