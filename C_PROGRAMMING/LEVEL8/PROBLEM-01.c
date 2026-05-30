/*Write a loop program to print sum of 1 to 5
Function Name: disp_sum*/
#include <stdio.h>
int disp_sum(int);
int main()
{
    int y;
    y = disp_sum(5);
    printf("%d",y);
}
int disp_sum(int n)
{
    int y,x;
    y=0;
    for(x=1;x<=n;x++)
    {
        y=y+x;
    }
    return y;
}   