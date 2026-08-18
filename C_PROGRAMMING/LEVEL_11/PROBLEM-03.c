/*Write a loop program to print 1 to 5 one by one.
Write a function and print the result in a main function.*/
#include <stdio.h>
int arrange_ascend(int a[]);
int main()
{
    int a[5],i;
    int arrange_ascend(a);
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}
int arrange_ascend(int a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        a[i]=i+1;
    }
}