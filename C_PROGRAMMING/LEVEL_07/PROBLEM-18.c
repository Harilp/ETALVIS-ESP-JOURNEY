/*Write a program to get a number from the user and print whether that number’s first two digits
 (ten’s digit and one’s digit) form a prime number.

Function Name: check_first_2digits_prime*/
#include <stdio.h>
void check_first_2digits_prime(int);
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a%100;
    check_first_2digits_prime(b);
    return 0;
}
void check_first_2digits_prime(int x)
{
    int a,b;
    b=1;
    if(x>=2){
    for(a=2;a<=(x-1);a++)
    {
        if((x%a)==0)
        {
            b=0;
            break;
        }
    }
    if(b)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
    }
    else
    {
        printf("Enter number greater than 1");
    }
}