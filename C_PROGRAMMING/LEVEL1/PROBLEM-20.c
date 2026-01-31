// get a two digit number from the user and subtract 5 from that number if the sum of the digits of the number is odd, then print the result.
//do not use "if". 
#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter a 2 digit number:");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    int sum=c+b;
    int odd=sum%2;
    d=-5*odd;
    int result = a+d;
    printf("the number is:%d",result);
    return 0;
}
