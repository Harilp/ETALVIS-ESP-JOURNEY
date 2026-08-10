/*write a loop program to print sum of 1 to 5*/
#include <stdio.h>
int main()
{
    int i,a;
    a = 0;
    for(i=1;i<=5;i++)
    {
        a=a+i;
    }
    printf("the sum is:%d",a);
    return 0;
}