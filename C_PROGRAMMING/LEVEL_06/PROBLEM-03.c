/*write a loop program to print sum of 1 to 5*/
#include <stdio.h>
int main()
{
    int a,sum;
    a=1;
    sum = 0;
    while(a<=5)
    {
        sum = sum + a;
        a++;
    }
    printf("the sum of 1 to 5 is:%d",sum);
    return 0;
}