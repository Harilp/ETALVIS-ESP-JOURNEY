/*Write a function to find the two-digit odd numbers whose sum of digits is 7. Print the results in the main function.

Function Name: find_2digit_odd_sum7

Answe:  
25, 43, 61*/
#include <stdio.h>

void find_2digit_odd_sum7(int a);
int main()
{
    int a;
    a=10;
    printf("The two-digit odd numbers whose sum of digits is 7:\n");
    find_2digit_odd_sum7(a);
}
void find_2digit_odd_sum7(int a)
{
    int x,y,z;
    for(;a<100;a++)
    {
        if(a%2==1)
        {
            x=a%10;
            y=a/10;
            z=x+y;
            if(z==7)
            {
                printf("%d\n",a);
            }
        }

    }
}
