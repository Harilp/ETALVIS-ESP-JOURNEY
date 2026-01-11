//get the three digit number from the user and print the sum of the digits
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a%100;
    c=a/100;
    printf("b:%d\nc:%d",b,c);
    return 0;
}