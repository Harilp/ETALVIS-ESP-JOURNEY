/*Write a function to copy a string to another.

Function Name: 
strcopy(src, dst)*/
#include <stdio.h>
void strcopy(char src[],char dst[]);
int main()
{
    char src[100];
    char dst[100];
    printf("Enter the string:\n");
    scanf("%99s",src);
    strcopy(src,dst);
    printf("copied string:\n%s",dst);
}
void strcopy(char src[],char dst[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}