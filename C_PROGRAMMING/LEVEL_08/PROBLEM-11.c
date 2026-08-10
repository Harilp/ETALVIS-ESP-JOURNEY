/*Write a program to get a number from the user and print the total number of digits that are odd in the number.
Function Name: disp_total_odd_digits*/
#include <stdio.h>
int disp_total_odd_digits(int);
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=disp_total_odd_digits(a);
    printf("%d",b);
}
int disp_total_odd_digits(int a)
{
    int b,c;
    b=0;
    while(a!=0)
    {
        c=a%10;
        if((c%2))
        {
            b=b+1;
        }
        a=a/10;
    }
    return b;
}