/*Write a program to get a number from the user and if the last digit of the number is even,
print the same number. If the last digit of the number is odd,
then subtract 1 from the last digit and print the number.
(Note: Last digit – MSB)

Function Name: check_last_digit_odd*/
#include <stdio.h>
void check_last_digit_odd(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    check_last_digit_odd(a);
}
void check_last_digit_odd(int x)
{
    if(x%2)
    {
        x=x-1;
        printf("%d",x);
    }
    else
    {
        printf("%d",x);
    }
}