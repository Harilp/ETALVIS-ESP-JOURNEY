/*Write a program to get a number from the user and print the total number of single‑digit perfect square numbers in the number.

Function Name: disp_single_digit_square*/
#include <stdio.h>
void disp_single_digit_square(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    disp_single_digit_square(a);
    return 0;
}
void disp_single_digit_square(int a)
{
    int b,c;
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
}