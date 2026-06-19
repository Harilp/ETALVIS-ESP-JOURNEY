/*Get multiple numbers from the user and store them in an array.
Stop getting numbers when the number is 0.
If the total number of elements entered is odd, print the middle number.
Otherwise, print the average of the middle two numbers.*/
#include <stdio.h>
int main()
{
    int a[100],i,l,e,d;
    printf("Enter the numbers:\n");
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
    }
    if(i%2)
    {
        l=i/2;
        printf("middle number is : %d",a[l]);
    }
    else
    {
        e=i/2;
        d=e-1;
        int sum = a[e]+a[d];
        sum =sum/2;
        printf("the avg of middle two numbers are: %d",sum);
    }
    
    return 0;
}