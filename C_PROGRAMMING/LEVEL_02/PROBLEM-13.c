/*Get a four-digit number from the user and check 
if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different. If yes, print 1; otherwise, print 0.*/
#include <stdio.h>
int main()
{
    printf("enter the number:");
    int a,b,d;
    scanf("%d",&a);
    int r = a%100;
    b = r/10;
    d = r%10;
    int sum= (b == d);
    printf("result:%d",sum);
    return 0;
}