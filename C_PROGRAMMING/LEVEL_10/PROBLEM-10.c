/*Get a number up to 50 digits and reverse it.*/
#include <stdio.h>
int main()
{
    char a[51],i,x;
    printf("Enter the string of 50:");
    scanf("%50s",a);
    i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    for(x=i-1;x>=0;x--)
    {
        printf("%c",a[x]);

    }
    return 0;
}