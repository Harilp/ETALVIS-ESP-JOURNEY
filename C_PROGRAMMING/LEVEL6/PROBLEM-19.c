/*Write a program to get a 4‑digit number from the user,
print whether that number’s middle two digits (hundred’s digit and ten’s digit) is prime.*/
#include <stdio.h>
int main()
{
    int a,b,c,d,f,prime;
    printf("Enter the four digit number number:");
    scanf("%d",&d);
    f=d%1000;
    a=f/10;
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