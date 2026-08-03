/*Add two integer arrays of up to 50 digits and store the result in a 51-digit array.*/
#include <stdio.h>
int main()
{
    int a[50],b[50],c[2],s[51],i;
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
    c[1]=0;
    for(i=49;i>=0;i--)
    {
        
        s[i]=a[i]+b[i]+c[1];
        c[0]=s[i]%10;
        c[1]=s[i]/10;
        s[i]=c[0];
    }
    s[0]=c[1];
    for(i=0;i<51;i++)
    {
        printf("%d",s[i]);
    }
    
    return 0;
}