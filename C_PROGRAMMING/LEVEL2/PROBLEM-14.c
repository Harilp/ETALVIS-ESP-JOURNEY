/*Get a four-digit number from the user and check
 if the first 2 digits and last 2 digits are the same. If yes, print 1; otherwise, print 0.*/
#include <stdio.h>
int main()
{
    printf("enter the number:");
    int a,b,d;
    scanf("%d",&a);
    b = a%100;
    d = a/100;
    int sum= (b == d);
    printf("result:%d",sum);
    return 0;
}