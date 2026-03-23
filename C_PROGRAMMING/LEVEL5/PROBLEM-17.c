/*Write a program to get a number from the user, print whether that number is prime,
 and check if the sum of its digits is equal to 14.*/
#include <stdio.h>
    
int main()
{
    int a,b,c,s,x;
    printf("enter the number:");
    scanf("%d",&a);
    if(a == 1 || a == 0)
    {
        goto x; 
    }
    c = 0;
    for(b=2;b<=a-1;b++)
    {
        c = a%b;
        if(c == 0)
        {
            goto x;
        }
    }
    goto y;
    x:
    printf("the number is not prime ");
    goto end;
    y:
    printf("the number is prime");
    end:
    s=0;
    for(;a!=0;)
    {
        x = a%10;
        s=s+x;
        a = a/10;
    
    }
        if(s == 14)
        {
            goto p;
        }
        else
        {
            goto o;
        }
    p:
    printf(" & sum of digit's is 14");
    goto l;
    o:
    printf("& sum of digit's is not 14");
    l:
return 0;
}