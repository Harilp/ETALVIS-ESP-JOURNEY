/*write a program to get a number from the user and interchange the first and last digit and print the result*/
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,s,r;
    printf("enter the number:");
    scanf("%d",&a);
    e = a;
    c  = a%10;
    b = 1;
    for(;a>9;a%10)
    {
        a = a/10;
        b = b*10;
    }
    d = c*b;
    e = e%b;
    f = (e/10)*10;
    s = d+f+a;
    printf("Interchange the first and last digit is : %d\n",s);

    return 0;
}