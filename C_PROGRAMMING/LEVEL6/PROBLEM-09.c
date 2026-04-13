/*Write a loop program to print the sum of two-digit numbers whose one’s digit is 5.*/
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    a=10;
    c=0;
    while(a<100)
    {
        b=a%10;
        if(b==5)
        {
            c=a+c;
        }
        a++;
    }
    printf("%d\n",c);
    
    return 0;
}
 