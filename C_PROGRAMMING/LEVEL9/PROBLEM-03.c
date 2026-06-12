/*get 5 numbers from the user and print the smallest number*/
#include <stdio.h>
int main()
{
    int a[5],i,c,b;
    printf("Enter the number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;
    b=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<b)
        {
            b=a[i];
        }    
    }
    printf("the smallest number is :%d",b);
    
    return 0;
}