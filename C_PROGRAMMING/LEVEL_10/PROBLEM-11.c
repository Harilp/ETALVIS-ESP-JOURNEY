/*Get a number string up to 50 digits and convert it to an integer array.*/
#include <stdio.h>
int main()
{
    char a[51],i,x;
    int b[50];
    printf("Enter the string of 50:");
    scanf("%50s",a);
    i=0;
    while(a[i]!='\0')
    {
        b[i]=a[i]-'0';
        i++;
    }
    for(x=0;x<i;x++)
    {
        printf("%d",b[x]);
    }
    
    return 0;
}