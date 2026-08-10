/*get a number from the user and print the sum of all digits*/
#include <stdio.h>
int main()
{
    int i,a,b,c;
    printf("enter the number:");
    scanf("%d",&a);
    b = 0;
    for(;a!=0;)
    {
        c=a%10;
        b=b+c;
        a=a/10;
    }
    printf("b = %d\n",b);
    return 0;
}