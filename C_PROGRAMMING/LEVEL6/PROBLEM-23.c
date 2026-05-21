/*Write a program to get a number from the user and print the total number of single-digit perfect square numbers in the number.*/
#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the number:");
    scanf("%d",&a);
    c=0;
    while(a!=0)
    {
        b=a%10;
        if(b==1)
        {
            c = c+1;               
        }
        if(b==4)
        {
            c = c+1;  
        } 
        if(b==9)
        {
            c = c+1;
        }
        a=a/10;
    }
    printf("the total number of single-digit perfect square numbers:%d",c);
    return 0;
}