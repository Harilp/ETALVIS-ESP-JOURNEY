/*Get a string and find the length of the string*/
#include <stdio.h>
int main()
{
    char a[100],i;
    i=0;
    scanf("%s",a);
    while(a[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    
    return 0;
}