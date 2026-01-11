//get a three digit number from the user and print the reverse of the digits
#include <stdio.h>
int main()
{
    int a,b,c,d,f;
    printf("enter the 3 digit number:\n");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    d=c/10;
    f=c%10;
    printf("the reverse of the digits are:%d%d%d",f,d,b);
    return 0;
}
//or

#include <stdio.h>
int main()
{
    int a,b,c,d,f,rev,add1,add2;
    printf("enter the 3 digit number:\n");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    d=c/10;
    f=c%10;
    add1=f*100;
    add2=d*10;
    rev=add1+add2+b;
    printf("the reverse of the digits are:%d",rev);
    return 0;
}