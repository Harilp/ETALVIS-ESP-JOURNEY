//get a two digit number from the user and print the ten's digit
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the2 digit number:");
    scanf("%d",&a);
    b=a/10;
    printf("result:%d",b);
    
    return 0;
}
