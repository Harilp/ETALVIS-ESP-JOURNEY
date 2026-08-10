/*Write a program to get a number from the user and print the total number of single-digit prime numbers present in that number*/
#include <stdio.h>
int main()
{

    int a,b,c;
    printf("Enter the numbe:");
    scanf("%d",&a);
    c=0;
    for(;a!=0;)
    {
        b=a%10;
        a=a/10;
        if(b==2 || b==3 || b==5 || b==7)
        {
            c = c+1;
        }
    }
    printf("%d",c);
    return 0;
}