/*write a loop program to print sum of 6 to 1*/
#include <stdio.h>
int main()
{
    int a,b;
    b = 0;
    for(a=6;a>=1;a--)
    {
        b = b+a;
    }
    printf("the sum is :%d",b);
    return 0;
}