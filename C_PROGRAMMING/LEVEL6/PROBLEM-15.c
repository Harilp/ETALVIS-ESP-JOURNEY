/*Write a program to get a number from the user. If the last digit of the number is even, 
print the same number. If the last digit of the number is odd, subtract 1 from the last digit and print the number.
(Note: “Last digit” here refers to the MSB – the most significant digit of the number.)*/
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter the number:");
    scanf("%d",&a);
    d=a;
    c=1;
    while(a>10)
    {
        b=a%10;
        a=a/10;
        c=c*10;
    }
    e=a%2;
    if(e==0)
    {
        printf("result:%d",d);

    }
    else
    {
        a=a-1;
        d=d%c;
        a=a*c;
        f=a+d;
        printf("result:%d",f);
    }
    return 0;
}