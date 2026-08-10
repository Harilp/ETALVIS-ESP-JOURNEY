/*write a program get a number from user print the total number of two-digit perfect square numbers in the number*/
#include <stdio.h>
int main()
{
    int x,a,b,c,v,y;
    printf("Enter the number:");
    scanf("%d",&a);
    b=0;
    y=0;
    for(;a!=0;)
    {
        c = a%10;
        a = a/10;
        x = a%10;
        v = (x*10)+c;
        
        if(v>=10)
        {
            if(v==16 || v==25 || v==36 || v==49 || v==64 || v==81)
            {
                y=y+1;
            }
        }
    }
    printf("%d\n",y);
    return 0;
}