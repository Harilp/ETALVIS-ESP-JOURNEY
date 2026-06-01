/*Write a program to get a number from user
and if the last digit of the number is even print the same number.
If the last digit of the number is odd, then subtract 1 from the last digit and print the number.
(Note: Last digit – MSB)

Function Name: check_last_digit_odd*/
#include <stdio.h>
int check_last_digit_odd(int);
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=check_last_digit_odd(a);
    printf("%d",b);
}
int check_last_digit_odd(int a)
{
    int b,c,d,sum,e;
    b=a;
    c=1;
    while(b>9)
    {
        c=c*10;
        b=b/10;
        
    }
    b=a/c;
    if((b%2))
    {
        d=((a/c)-1)*c;
        e=a%c;
        sum=d+e;
        return sum;
    }
    else
    {
        return a;
    }

}