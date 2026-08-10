/*Write a program to get two numbers from user and print the LCM of those numbers.  
Function Name: disp_LCM2*/
#include <stdio.h>
void disp_LCM2(int,int);
int main()
{
    int a,b;
    printf("Enter the 2 numbers:");
    scanf("%d %d",&a,&b);
    disp_LCM2(a,b);
    return 0;
}
void disp_LCM2(int a,int b)
{
    int c,d,e,f,sum;
    e=a;
    f=b;
    while(b>0)
    {
        c=a%b;
        if(c==0)
        {
            d=b;
        }
        a=b;
        b=c;
    }
    sum=e*f;
    sum=sum/d;
    printf("the LCM is :%d",sum);
}