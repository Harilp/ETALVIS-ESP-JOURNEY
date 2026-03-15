/*write a loop program to print the two digit odd numbers below 20*/
#include <stdio.h>
int main()
{
    int a,b;
    for(a=11;a<=20;a++)
    {
        b = a%2;
        if(b==1)
        {
            printf("%d\n",a);
        }
    }
    return 0;
}