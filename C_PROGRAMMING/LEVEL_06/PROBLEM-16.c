/*write a program to get anumber from the user print whether the number is prime or not */
#include <stdio.h>
int main()
{
    int a,b,c,prime;
    printf("Enter the number:");
    scanf("%d",&a);
    prime=1;
    b=2;
    if(a<=1)
    {
        printf("the number is not prime and enter number greater than 1");
    }
    else{
    while(b<a && prime==1)
    {
        c=a%b;
        if(c==0)
        {
            prime=0;
        }
        b++;
    }
    
    //checking the remainder has change to 0
    if(prime==0)
    {
        printf("the number is not prime");
    }
    else
    {
        printf("the number is prime");
    }
    }
    return 0;
}