/*Write a loop program to print the sum of 1 to 5  

Function Name: disp_sum*/
#include <stdio.h>
void disp_sum(int);
int main()
{
    disp_sum(5);
}
void disp_sum(int n)
{
    int x;
    int a=0;
    for(x=1;x<=n;x++)
    {
        a=a+x;
    }
    printf("%d",a);
}