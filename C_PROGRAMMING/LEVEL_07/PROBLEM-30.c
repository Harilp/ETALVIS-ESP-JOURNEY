/*Write a program to get two numbers from user and print the HCF of those numbers.  
Function Name: disp_count_HCF2*/
#include <stdio.h>
void disp_count_HCF2(int,int);
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d %d",&a,&b);
    disp_count_HCF2(a,b);
    return 0;
}
void disp_count_HCF2(int a,int b)
{
    int c,d;
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
    printf("The the HCF is :%d",d);
}