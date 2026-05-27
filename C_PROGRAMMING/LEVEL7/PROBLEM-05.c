/*Write a loop program to print odd numbers between 1 and 9.
Function Name: disp_odd*/
#include <stdio.h>
void disp_odd(int);
int main()
{
    disp_odd(9);
}
void disp_odd(int n)
{
    int x;
    for(x=1;x<=n;x++)
    {
        if((x%2))
        {
            printf("%d\n",x);
        }
    }
}