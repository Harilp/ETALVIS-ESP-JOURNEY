/*Write a program to get a number from the user and print the total number of digits in that number*/
#include <stdio.h>
int main()
{
    int a,b,c;
    c=0;
    printf("Enter the number:");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        c=c+1;
        a=a/10;
    }
    printf("%d",c);
    return 0;
}