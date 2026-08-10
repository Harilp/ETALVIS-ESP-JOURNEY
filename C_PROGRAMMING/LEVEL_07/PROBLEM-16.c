/*Write a program to get a number from the user and print whether that number is prime or not.

Function Name: check_prime*/
#include <stdio.h>
void check_prime(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    check_prime(a);
    return 0;
}
void check_prime(int x)
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