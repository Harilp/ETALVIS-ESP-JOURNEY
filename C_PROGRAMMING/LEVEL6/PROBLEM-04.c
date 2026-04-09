/*write a loop program to pint the sum of 6 to 1*/
#include <stdio.h>
int main()
{
    int a,sum;
    sum = 0;
    a = 6;
    while(a>=1)
    {
        sum = sum+a;
        a--;
    }
    printf("the sum of 6 to 1 is:%d",sum);
    return 0;
}