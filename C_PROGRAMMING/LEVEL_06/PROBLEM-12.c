/*Write a program to get a number from the user and print the sum of all digits*/
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
        c=b+c;
        a=a/10;
    }
    printf("%d",c);
    return 0;
}