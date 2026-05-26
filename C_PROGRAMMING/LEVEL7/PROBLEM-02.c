/*Write a loop program to print 5 to 1 one by one.

Function Name: disp_descend*/
#include <stdio.h>

void disp_decend(int);
int main()
{
    disp_decend(1);
}
void disp_decend(int n)
{
    int x;
    for(x=5;x>=n;x--)
    {
        printf("%d\n",x);
    }
}