/*Get multiple numbers from the user and store them in an array.
Stop getting numbers when the number is 0.
Add each number’s digits and put them in a new array,
then arrange the new array in ascending order and print the same.*/
#include <stdio.h>
int main()
{
    int a[100],i,g,c[100],b;
    printf("Enter the numbers:\n");
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
    }
    for(g=0;g<i;g++)
    {
        c[g]=0;
        while(a[g]!=0)
        {
            b=a[g]%10;
            c[g]=c[g]+b;
            a[g]=a[g]/10;
        }
    }
    for(g=0;g<i-1;g++)
    {
        for(int y=g+1;y<i;y++)
        {
            if(c[g]>c[y])
            {
                int temp=c[g];
                c[g]=c[y];
                c[y]=temp;
            }
        }
    }
    printf("The array:\n");
    for(g=0;g<i;g++)
    {
        printf("%d ",c[g]);
    }
    return 0;
}