/*write a function to compare two strings. Print success or failure.
Function Name: strcomp(src,dst)*/
#include <stdio.h>
void strcomp(char src[],char dst[]);
int main()
{
    char src[100],dst[100];
    printf("Enter the src string:\n");
    scanf("%99s",src);
    printf("Enter the dst string:\n");
    scanf("%99s",dst);
    strcomp(src,dst);
}
void strcomp(char src[],char dst[])
{
    int i=0;
    while(src[i]!='\0')
    {
        if(src[i]!=dst[i])
        {
            printf("failure\n");
            return;
        }
        i++;
    }
    printf("Success\n");
}