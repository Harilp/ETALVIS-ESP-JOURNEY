/*write a program to get a number from the user and print the reverse of the number*/
#include <stdio.h>
int main()
{
    int a,b,c;
    c = 0;
    printf("enter the number:");
    scanf("%d",&a);
    for(;a!=0;)
    {
        b = a%10;
        c = (b+c)*10;
        a = a/10;
    }
    c = c/10;
    printf("reverse of the number:%d",c);   
    return 0;
}