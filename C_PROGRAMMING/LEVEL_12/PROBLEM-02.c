/*Get a string and a character from the user. Find all the positions where the character is present in the string and print those positions.

Example:

String: helloetalvislearning
Character: e
Output: 2, 6, 14*/
#include <stdio.h>
void getstr(char *str,char *c);
void pos(char *str,char c);
int main()
{
    char str[100],c;
    getstr(str,&c);
    pos(str,c);
    
}
void getstr(char *str,char *c)
{
    printf("Enter the string\n");
    scanf("%99s",str);
    printf("Enter the character\n");
    scanf(" %c",c);
}
void pos(char *str,char c)
{
    int i,j;
    i=0;
    j=1;
        while(str[i]!='\0')
        {
            if(str[i]==c)
            {
                if(!j) printf(", ");
                printf("%d",i+1);
                j=0;
            }
            i++;
        }
}