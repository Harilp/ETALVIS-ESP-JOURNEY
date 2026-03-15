/*write a loop program to print the two-digit even numbers who's sum of the digit's are 6 */
#include <stdio.h>
int main()
{
    int a,b,c,d,s;
    for(a=10;a<=60;a++)
    {
        b = a%2;
        if(b==0)
        {
            c=a%10;
            d=a/10;
            s = c+d;
            if(s==6)
            {
                printf("%d\n",a);
            }
        }
    }
    return 0;
}