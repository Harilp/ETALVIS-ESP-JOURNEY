/*Get multiple numbers from the user and store them in an array. Stop getting numbers when the number is 0.
If 4 numbers are entered and the first and last numbers are equal, print “Success”, else print “Failure”.*/
#include <stdio.h>
int main()
{
    int a[100],i;
    printf("Enter the numbers:\n");
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
    }
    if(i==4 && a[0]==a[i-1])
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}