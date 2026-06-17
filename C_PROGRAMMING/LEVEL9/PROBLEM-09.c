/*Get 5 numbers from the user, remove the prime numbers, and create a new array. Then print the same.*/
#include <stdio.h>
int main()
{
    int a[5],b,i,c,prime,m[5],l;
    printf("Enter the number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    l=0;
    for(i=0;i<5;i++)
    {
    prime=1;
    b=2;
    if(a[i]<=1)
    {
        prime=0;
    }
    else{
    while(b<a[i] && prime==1)
    {
        c=a[i]%b;
        if(c==0)
        {
            prime=0;
        }
        b++;
    }
    }
     //checking the remainder has change to 0
    if(prime==0)
    {
        m[l]=a[i];
        l++;
    }
    }
    printf("the numbers are: ");
    for(i=0;i<l;i++)
    {
        printf("%d ",m[i]);
    }
    return 0;
}