/*Write a loop program to print the two-digit even numbers whose sum of digits is 6.*/
#include <stdio.h>
int main()
{
    int a,b,c,d,s;
    a=10;
    while(a<100)
    {
        b = a%2;
        if(b==0)
        { 
            c=a%10;
            d=a/10;
            s=c+d;
            if(s==6)
            {
                printf("%d\n",a);
            }
        }
        a++;
        
    }
    
    return 0;
}