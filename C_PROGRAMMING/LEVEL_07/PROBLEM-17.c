/*Write a program to get a number from the user, print whether that number is prime, and check if the sum of its digits is equal to 14.
Function Name: check_prime_and_sum14*/
#include <stdio.h>
void check_prime_and_sum14(int);
int main()
{
     int a;
    printf("Enter the number:");
    scanf("%d",&a);
    check_prime_and_sum14(a);
}
void check_prime_and_sum14(int x)
{
    int a,b,c,v;
    c=0;
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
    while(x!=0)
    {
        v=x%10;
        c=c+v;
        x=x/10;
    }
    if((b) && c==14)
    {
        printf("Prime & sum of digits is 14");
    }
    if(b==0 && c==14)
    {
        printf("Not Prime but sum of digits is 14");
    }
    }
    if((b) && c!=14)
    {
        printf("Prime & sum of digits is not 14");
    }
    if(b==0 && c!=14)
    {
        printf("Not Prime & sum of digits is not 14");
    }
}