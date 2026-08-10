/*Add two integer arrays of up to 50 digits and store the result in a 51-digit array.*/
#include <stdio.h>
int main()
{
    int a[50],b[50],s[51],i,sum,carry;
    printf("Enter 'a' numbers:\n");
    for(i=0;i<50;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 'b' numbers:\n");
    for(i=0;i<50;i++)
    {
        scanf("%d",&b[i]);
    }
    carry=0;
    for(i=49;i>=0;i--)
    {
        
        sum=a[i]+b[i]+carry;
        carry=sum/10;
        s[i+1]=sum%10;
    }
    s[0]=carry;
    for(i=0;i<51;i++)
    {
        printf("%d",s[i]);
    }
    return 0;
}