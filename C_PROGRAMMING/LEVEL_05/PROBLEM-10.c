/*write a loop program to print the sum of 2-digit odd numbers who's ten's digit is 7*/
#include <stdio.h>
int main()
{
    int i,a,b,c;
    c=0;
    for(i=10;i<100;i++)
    {
        a=i%2;
        if(a==1)
        {
            b=i/10;
            if(b==7)
            {
                c=c+i;
            }
        }
    }
    printf("sum is : %d\n",c);
    return 0;
}