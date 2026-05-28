/*Write a program to get a number from the user and print the total number of two‑digit odd numbers in the number.

Function Name: disp_total_2digit_odd*/
#include <stdio.h>
void disp_total_2digit_odd(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    disp_total_2digit_odd(a);
    return 0;
}
void disp_total_2digit_odd(int x)
{
    int a,b;
    b=0;
    while(x>9)
    {
        a=x%100;
        if((a%2))
        {
            b=b+1;
        }
        x=x/10;
    }
    printf("%d",b);
}