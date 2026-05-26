/*Write a loop program to print 1 to 5 one by one.

Function Name: disp_assend*/
#include <stdio.h>

void disp_assend();
int main()
{
    disp_assend();
}
void disp_assend()
{
    int x;
    for(x=1;x<=5;x++)
    {
        printf("%d\n",x);
    }
}