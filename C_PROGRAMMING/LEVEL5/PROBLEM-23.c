/*write a program get a number from the user print the total number of single-digit perfect square numbers in the number.*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number:");
    scanf("%d",&a);
    c= 0;
    for(;a!=0;a=a/10)
    {
        b = a%10;
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
    }
    printf("%d",c);
    return 0;
}