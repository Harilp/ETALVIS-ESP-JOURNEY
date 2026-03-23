/*Write a program to get a number from the user and print whether that number is prime or not*/
#include <stdio.h>
    
int main()
{
    int a,b,c;
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
    printf("the number is not prime");
    goto end;
    y:
    printf("the number is prime");
    end:
return 0;
}