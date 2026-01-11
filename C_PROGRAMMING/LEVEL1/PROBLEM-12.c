//get the two digit number from the user and print the reverse of the number
#include <stdio.h>
int main()
{
    int a,b,c,d,rev;
    printf("enter the 2 digit number:\n");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    d=c*10;
    rev=d+b;
    printf("the reverse of the digits are:%d\n",rev);
    return 0;
}
//or 
#include <stdio.h>
int main()
{
    int a,b,c,d,rev;
    printf("enter the 2 digit number:\n");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    printf("the reverse of the digits are:%d%d\n",c,b);
    return 0;
}
