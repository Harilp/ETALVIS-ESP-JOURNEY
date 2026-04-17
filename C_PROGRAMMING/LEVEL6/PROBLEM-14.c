/*write a progarm to get a number from the user and inter change the first and laste digits and print the result */
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter the number:");
    scanf("%d",&a);
    d=a;
    b=a%10;
    c=1;

    while (a>9)
    {
        a=a/10;
        c=c*10;
    }
    f=d/c;
    e=d%c;
    e=e/10;
    e=e*10;
    b=b*c;
    int sum =b+e+f;
    printf("%d\n",sum);
    
    return 0;
}