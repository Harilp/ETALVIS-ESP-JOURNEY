/*Write a program to get a number from the user and print whether that number’s
 first two digits (ten’s digit and one’s digit) form a prime number.*/
#include <stdio.h>
int main()
{
    int a,b,c,d,prime;
    printf("Enter the number:");
    scanf("%d",&d);
    a=d%100;
    b=2;
    prime=1;
    if(a<=1)
    {
        printf("Enter a valid number or grater than or equal to 2");
    }
    else
    {
        while(b<a && prime==1)
        {
            c=a%b;
            if(c==0)
            {
                prime=0;
            }
            b++;

        }

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