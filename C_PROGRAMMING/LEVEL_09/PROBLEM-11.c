/*Get multiple numbers from the user and store them in an array.
Stop when the number is 0. Print the total numbers entered by the user and print the sum of numbers.*/
#include <stdio.h>
int main()
{
    int a[100],i,g,s;
    printf("Enter the numbers:\n");
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            printf("the total numbers entred are: %d\n",i);
            g=i;
            break;
        }
    }
    s=0;
    printf("The sum of the numbers are: ");
    for(i=0;i<g;i++)
    {
        s=s+a[i];        
    }
    printf("%d",s);
    return 0;
}