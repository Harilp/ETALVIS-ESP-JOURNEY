/*write a program to get two numbers from the user and print the HCF of those numbers*/
#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the 2 numbers to find HCF:");
    scanf("%d %d",&a,&b);
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
    printf("The HCF of 2 numbers is:%d",d);    
    return 0;
}