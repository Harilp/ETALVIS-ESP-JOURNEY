/*write a loop progarm to print the two digit odd numbers, who's sum of the digits are 7
answer:25
       43
       61
*/
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    a=10;
    while(a<=99)
    {
        b = a%2;
        if(b==1)
        {
            c = a%10;
            d = a/10;
            e = c+d;
            if(e == 7)
            {
                printf("%d\n",a);
            }
        }
        a++;
        
    }
    
    return 0;
}