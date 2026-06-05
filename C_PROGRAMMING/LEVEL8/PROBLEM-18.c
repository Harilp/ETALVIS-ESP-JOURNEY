/*Write a program to get two numbers from the user and print the LCM of those numbers.

Function Name: disp_LCM2*/
#include <stdio.h>
int disp_LCM2(int,int);
int main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d %d",&a,&b);
    c=disp_LCM2(a,b);
    printf("%d",c);
}
int disp_LCM2(int a,int b)
{
    int c,d,e,f;
    c=a;
    d=b;
    while(b!=0)
    {
        e=a%b;
        if(e==0)
        {
            f=b;
        }
        a=b;
        b=e;
    }
    int sum=c*d;
    sum=sum/f;
    return sum;
}
