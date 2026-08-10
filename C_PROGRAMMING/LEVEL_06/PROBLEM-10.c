/*Write a loop program to print the sum of two‑digit odd numbers whose ten’s digit is 7*/
#include <stdio.h>
int main()
{
    int a,b,c,d;
    c=0;
    a=10;
    while(a<100)
    {
        b = a%2;
        if(b==1)
        {
            d=a/10;
            if(d==7)
            {
                c=a+c;
            }
        }
        a++;
    }
    printf("%d\n",c);
    return 0;
}