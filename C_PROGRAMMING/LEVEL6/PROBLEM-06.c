/*write a loop program to print the two digit odd numbers,below 20.*/
#include <stdio.h>
int main()
{
    int a,b;
    a=10;
    while (a<=20)
    {
        b = a%2;
        if(b==1)
        {
            printf("%d\n",a);
        }
        a++;
    }
    
    
    return 0;
}