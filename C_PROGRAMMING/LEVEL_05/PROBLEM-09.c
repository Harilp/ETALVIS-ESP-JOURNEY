/*write a loop program to print sum of two-digit numbers who's one's-digit is 5 */
#include <stdio.h>
int main()
{
    int i,b,c;
    c=0;
    for(i=10;i<100;i++)
    {
        b=i%10;
        if(b==5)
        {
            c=c+i;
        }
    }
    printf("sum is:%d\n",c);
    return 0;
}