/*Write a function to concatenate two strings to another

Function Name: strcon(src1, src2,dst)*/
#include <stdio.h>
void strcon(char src1[],char src2[],char dst[]);
int main()
{
    char src1[100],src2[100],dst[100];
    printf("Enter the src1 string:\n");
    scanf("%99s",src1);
    printf("Enter the src2 string:\n");
    scanf("%99s",src2);
    strcon(src1,src2,dst);
}
void strcon(char src1[],char src2[],char dst[])
{
    int i=0;
    int y=0;
    while(src1[i]!='\0')
    {
        dst[i]=src1[i];
        i++;
    }
    while(src2[y]!='\0')
    {
        dst[i]=src2[y];
        i++;
        y++;
    }
    dst[i]='\0';
    printf("%s",dst);
}