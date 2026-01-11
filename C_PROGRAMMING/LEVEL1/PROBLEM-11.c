//get the three digit number from the user and print the sum of the digits
#include <stdio.h>
int main()
{
    int a,b,c,e,f;
    printf("enter the 3 digit number:\n");
    scanf("%d",&a);
    b=a%100;
    c=a/100;
    e=b/10;
    f=b%10;
    int sum = c+e+f;
    printf("the sum of the digits are:%d\n",sum);
    return 0;
}
