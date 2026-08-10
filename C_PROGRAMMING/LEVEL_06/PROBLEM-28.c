/*write a program to get two numbers from user and print thte LCM of those numbers */
#include <stdio.h>
int main()
{
    int a,b,c,d,e,sum,v;
    printf("Enter the two numbers to find the lcm between them:\n");
    scanf("%d %d",&a,&b);
    c=a;
    d=b;
    while(b>0)
    {
        e=a%b;
        if(e==0)
        {
            v=b;
        }
        a=b;
        b=e;
    }
    sum = c*d;
    sum = sum/v;
    printf("the LCM is:%d",sum);
    return 0;
}