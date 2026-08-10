/*Write a program to get three numbers from user and print the LCM of those numbers.  
Function Name: disp_LCM3*/
#include <stdio.h>
void disp_LCM3(int,int,int);
int main()
{
    int a,b,c;
    printf("Enter the 3 number:");
    scanf("%d %d %d",&a,&b,&c);
    disp_LCM3(a,b,c);
    return 0;
}
void disp_LCM3(int a,int b,int c)
{
    int d,e,f,g,v,sum1,sum2,h,j,k;
    d=a;
    e=b;
    f=c;
    while(b>0)
    {
        g=a%b;
        if(g==0)
        {
            v=b;
        }
        a=b;
        b=g;
    }
    sum1=d*e;
    sum1=sum1/v;
    k=sum1;
    while(c>0)
    {
        h=sum1%c;
        if(h==0)
        {
            j=c;
        }
        sum1=c;
        c=h;
    }
    sum2=k*f;
    sum2=sum2/j;
    printf("the LCM is:%d",sum2);
}