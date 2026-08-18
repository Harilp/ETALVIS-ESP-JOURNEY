/*Pass an integer array to a function and increment each array element inside the function.*/
#include <stdio.h>
void pass(int a[]);
int main()
{
    int a[5],i,x;
    x=1;
    for(i=0;i<5;i++)
    {
        a[i]=x;
        x++;
    }
    pass(a);
}
void pass(int a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        a[i]++;
        printf("%d\n",a[i]);
    }

}