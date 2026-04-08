/**/
#include <stdio.h>
int main()
{
    int a,b,c,v;
    printf("Enter the 2 number:\n");
    scanf("%d%d",&a,&b);
        for(;b>0;)
        {
            c = a%b;
            a=b;
            b=c;
        }
        printf("the hcf of the numbers is:%d",a);
    return 0;
}