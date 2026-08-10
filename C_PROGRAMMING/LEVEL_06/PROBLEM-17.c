/*Write a program to get a number from the user, print whether that number is prime, and check if the sum of its digits is equal to 14.*/
#include <stdio.h>
int main()
{
    int a,b,c,v,n,m,prime;
    printf("Enter the number:");
    scanf("%d",&a);
    v=a;
    m=0;
    while(v!=0)
    {
        n=v%10;
        m=n+m;
        v=v/10;
        
    }
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
    
    //checking the 4 possible outcomes of prime and sum of digit's are 14
    if(prime==1 && m==14)
    {
        printf("Prime & sum of digits is 14");
    }
    if(prime==1 && m!=14)
    {
        printf("Prime & sum of digits is not 14");
    }
    if(prime==0 && m==14)
    {
        printf("Not Prime but sum of digits is 14");
    }
    if(prime==0 && m!=14)
    {
        printf("Not Prime & sum of digits is not 14");
    }
    }
        return 0;
}