/*Write a program to get a number from the user and print the total number of digits in that number.
Function Name: count_total_digits*/
#include <stdio.h>
void count_total_digits(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    count_total_digits(a);
}
void count_total_digits(int n)
{
    int b;
    b=0;
    while(n!=0)
    {
        n=n/10;
        b=b+1;
    }
    printf("%d",b);
}