/*Get a number from the user and check if the number is greater than 50. If yes, then print 1; otherwise, print 0.*/
#include <stdio.h>
int main()
{
    printf("enter the number:");
    int a;
    scanf("%d",&a);
    int b= (a > 50);
    printf("result:%d",b);
    return 0;
}