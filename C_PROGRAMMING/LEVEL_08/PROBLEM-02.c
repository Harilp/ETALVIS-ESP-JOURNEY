/*Write a loop program to print sum of 6 to 1
Function Name: disp_rsum*/
#include <stdio.h>
int disp_rsum(int);
int main()
{
    int y;
    y = disp_rsum(5);
    printf("%d",y);
}
int disp_rsum(int n)
{
    int a,b;
    b=0;
    for(a=6;a>=1;a--)
    {
        b=b+a;
    }
    return b;
}