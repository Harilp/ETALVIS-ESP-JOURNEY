/*Write a program to get a 4-digit number from the user and print whether that number’s middle two digits (hundred’s digit and ten’s digit) form a prime number.

Function Name: middle_2digits_prime*/
#include <stdio.h>
void middle_2digits_prime(int);
int main()
{
    int a,b,c;
    printf("Enter the four digit number:");
    scanf("%d",&a);
    b=a%1000;
    c=b/10;
    middle_2digits_prime(c);
    return 0;
}
void middle_2digits_prime(int x)
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