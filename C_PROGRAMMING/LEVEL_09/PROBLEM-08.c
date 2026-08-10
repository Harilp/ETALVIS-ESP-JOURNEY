/*Get 5 numbers from the user, remove the even numbers, create a new array, and print the same.*/
#include <stdio.h>
int main()
{
    int a[5],i,b,c[5];
    printf("Enter the number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    b=0;
    for(i=0;i<5;i++)
    {
        if(a[i]%2)
        {
            c[b]=a[i];
            b++;
        }
    }
    printf("The even numbers are:");
    for(i=0;i<b;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}