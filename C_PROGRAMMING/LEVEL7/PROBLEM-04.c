/*Write a loop program to print the sum of numbers from 6 down to 1.
Function Name: disp_rsum*/
#include <stdio.h>
void disp_rsum(int);
int main()
{
    disp_rsum(1);
}
 void disp_rsum(int n)
{
    int x;
    int a=0;
    for(x=6;x>=n;x--)
    {
        a=a+x;
    }
    printf("%d",a);
}
