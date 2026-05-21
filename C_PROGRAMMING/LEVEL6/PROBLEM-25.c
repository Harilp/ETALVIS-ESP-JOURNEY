/*Write a program to get a number from the user and print the total number of single-digit prime numbers in the number.*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number :");
    scanf("%d",&a);
    c=0;
    while(a!=0)
    {
        b=a%10;
        if(b==2 || b==3 || b==5 || b==7)
        {
            c=c+1;
        }
        a=a/10;
    }
    printf("%d",c);

    return 0;
} 