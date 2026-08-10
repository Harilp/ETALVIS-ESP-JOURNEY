/*Write a loop program to print the two‑digit odd numbers below 20.
Function Name: disp_2digit_odd_below20*/
#include <stdio.h>
void disp_2digit_odd_below20(int);
int main()
{
    disp_2digit_odd_below20(20);
}
void disp_2digit_odd_below20(int n)
{
    int x;
    for(x=10;x<=n;x++)
    {
        if((x%2))
        {
            printf("%d\n",x);
        }
    }


}