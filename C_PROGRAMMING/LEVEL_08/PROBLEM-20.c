/*Write a program to get two numbers from the user and print the HCF of those numbers.

Function Name: disp_count_HCF2*/
#include <stdio.h>
int disp_count_HCF2(int,int);
int main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d %d",&a,&b);
    c=disp_count_HCF2(a,b);
    printf("%d",c);
}
int disp_count_HCF2(int a,int b)
{
    int c,d;
    while(b!=0)
    {
        c=a%b;
        if(c==0)
        {
            d=b;
        }
        a=b;
        b=c;
    }
    return d;
}