/*Write a program to get a number from the user and print the total number of two‑digit perfect square numbers in the number.

Function Name: disp_two_digit_square*/
#include <stdio.h>
void disp_two_digit_square(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    disp_two_digit_square(a);
    return 0;
}
void disp_two_digit_square(int a)
{
    int v,y;
    y=0;
    while(a>=10)
    {
        v=a%100;
        
        if(v>=10 && (v==16 || v==25 || v==36 || v==49 || v==64 || v==81))
        {
            y=y+1;
        }
        a=a/10;
    }
    printf("the total number of two-digit perfect square numbers are:%d\n",y);
}