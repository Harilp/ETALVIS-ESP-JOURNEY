/*Write a program to get a number from the user and print the total number of digits that are odd in the number.*/
#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the number:");
    scanf("%d",&a);
    c=0;
    while(a!=0)
    {
        b=a%10;
        d=b%2;
        if(d==1)
        {
            c=c+1;
        }
        a=a/10;
    }
    printf("%d",c);
    return 0;
}