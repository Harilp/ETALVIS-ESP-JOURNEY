/*Write a program to get a number from the user and print the reverse of that number.
Function Name: disp_reverse_number*/
#include <stdio.h>
int disp_reverse_number(int);
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=disp_reverse_number(a);
    printf("%d",b);
}
int disp_reverse_number(int a)
{
    int b,c;
    c=0;
    while(a!=0)
    {
        b=a%10;
        c=c+b;
        c=c*10;
        a=a/10;
    }
    c=c/10;
    return c;
}