/*write a program to get three numbers from user and print the LCM of those numbers*/
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,v,m,n,x,y,sum1,sum2;
    printf("Enter the 3 numbers to find LCM:");
    scanf("%d %d %d",&a,&b,&c);
    d=a;
    e=b;
    f=c;
    while(b>0)
    {
        v=a%b;
        if(v==0)
        {
            m=b;
        }
        a=b;
        b=v;
    }
    sum1=d*e;
    sum1=sum1/m;
    n=sum1;
    while(c>0)
    {
        x=sum1%c;
        if(x==0)
        {
            y=c;
        }
        sum1=c;
        c=x;
    }
    sum2=n*f;
    sum2=sum2/y;
    printf("the LCM of the 3 numbers is:%d",sum2);
    return 0;
}