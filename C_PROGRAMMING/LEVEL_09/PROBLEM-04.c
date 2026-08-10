/*get 5 numbers from the user and print the biggest number*/
#include <stdio.h>
int main()
{
    int a[5],i,c;
    printf("Enter the number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    c=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>c)
        {
            c=a[i];
        }
    }
    printf("the biggest number is:%d",c);
    return 0;
}