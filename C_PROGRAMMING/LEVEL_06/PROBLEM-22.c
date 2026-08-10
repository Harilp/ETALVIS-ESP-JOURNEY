/*Write a program to get a number from the user and print the total number of two‑digit odd numbers in the number.*/
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("enter the number:");
    scanf("%d",&a);
    c=0;
    while(a>=10)
    {
       b=a%10;
       a=a/10;
       d=a%10;
       e=(d*10)+b;
       f=e%2;
       if(f==1)
       {
            c=c+1;
       }
       

    }
    printf("%d",c);
    return 0;
}