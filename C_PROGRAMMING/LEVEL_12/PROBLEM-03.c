/*Get a main string and a substring. Check whether the substring is present in the main 
string and print its position.

Example:

Input:
Main String: helloetalvislearning
Substring: etal

Output:
6*/
#include <stdio.h>
int main()
{
    int i,j,k,l,m,n;
    char str[100];
    char sub[100];
    printf("Enter the main string:");
    scanf("%s",str);
    printf("Enter the substring:");
    scanf("%s",sub);

    for(l=0;str[l]!='\0';l++);

    for(i=0;sub[i]!='\0';i++);
    for(k=0;k <= l - i;k++)
    {
    
    m=0;
    n=0;
    for(j=k;j<k+i;j++)
    {
        
        if(str[j]==sub[m])
        {
            n++;
            if(n==i)
            {
                printf("%d",k+1);
                return 0;         
            }
        }
        else{
            n=0;
            break;
        }
        m++;
    }
    }
    
}