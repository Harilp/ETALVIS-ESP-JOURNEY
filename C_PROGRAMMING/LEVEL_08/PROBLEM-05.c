/*Write a program to get a number from the user and print the total number of digits in that number.
Function Name: count_total_digits*/
#include <stdio.h>
int count_total_digits(int);
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=count_total_digits(a);
    printf("%d",b);
}
int count_total_digits(int a)
{
    int b;
    b=0;
    while(a!=0)
    {
        b=b+1;
        a=a/10;
    }
    return b;
}
