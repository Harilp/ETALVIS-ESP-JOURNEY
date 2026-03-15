/*write a loop program to print the two-digit odd numbers who's sum of the digit's are 7 */
#include <stdio.h>
int main()
{
    int a,b,c,d,s;
    for(a=10;a<=70;a++)
    {
        b = a%2;
        loop: if(b==1)
        {
            c=a%10;
            d=a/10;
            s = c+d;
            if(s==7)
            {
                printf("%d\n",a);
            }
        }
    }
    return 0;
}