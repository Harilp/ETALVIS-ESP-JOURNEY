/*Write a program to get three numbers from the user and print the LCM of those numbers.

Function Name: disp_LCM3*/
#include <stdio.h>
int disp_LCM3(int,int,int);
int main()
{
    int a,b,c,d;
    printf("Enter the number:");
    scanf("%d %d %d",&a,&b,&c);
    d=disp_LCM3(a,b,c);
    printf("%d",d);
}
int disp_LCM3(int a,int b,int c)
{
    int d,e,f,g,h,i,j,k,m;
    d=a;
    e=b;
    f=c;
    while(b!=0)
    {
        h=a%b;
        if(h==0)
        {
            i=b;
        }
        a=b;
        b=h;
    }
    int sum1=d*e;
    sum1=sum1/i;
    j=sum1;
    while(c!=0)
    {
        k=sum1%c;
        if(k==0)
        {
            m=c;
        }
        sum1=c;
        c=k;
    }
    int sum2=j*f;
    sum2=sum2/m;
    return sum2;
}