/*get 5 numbers from the user and print the average of all numbers*/
#include <stdio.h>
int main()
{
    int a[5],i,c;
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
    c=c/5;
    printf("the average of the 5 numbers is:%d\n",c);
    
    return 0;
}