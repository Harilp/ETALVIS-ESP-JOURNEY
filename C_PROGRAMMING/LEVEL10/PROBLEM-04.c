/*Get a number as a string and print the integer value of the string.*/
#include <stdio.h>
int main()
{
    char a[5],i;
    int x;
    printf("Enter the number:");
    scanf("%4s",a);
    x=0;
    for(i=0;i<4;i++)
    {
        x=x*10+(a[i]-'0');
    }
    printf("%d\n",x);
    
    return 0;
}