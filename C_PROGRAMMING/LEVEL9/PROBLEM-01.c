/*Get 5 numbers from user and print the sum of all numbers*/
#include <stdio.h>
int main()
{
    int a[5],c,i;
    printf("Enter the number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;
    for(i=0;i<5;i++)
    {
        c=c+a[i];
    }
    printf("%d",c);
    return 0;
}