/*Write a program to get a number from the user and print the total number of digits that are odd in the number.

Function Name: disp_total_odd_digits*/
#include <stdio.h>
void disp_total_odd_digits(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    disp_total_odd_digits(a);
    return 0;
}
void disp_total_odd_digits(int x)
{
    int a,b;
    a=0;
    while (x!=0)
    {
        b=x%10;
        if((b%2))
        {
            a=a+1;
        }
        x=x/10;
    }
    printf("%d",a);
    
}