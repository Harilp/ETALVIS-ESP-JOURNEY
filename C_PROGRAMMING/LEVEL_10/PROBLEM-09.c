/*Get a string of numbers up to 50 digits and remove all leading zeros.*/
#include <stdio.h>
int main()
{
    char a[51],i;
    printf("Enter the string:");
    
    scanf("%50s",a);
    i=0;
    while(a[i]=='0' && a[i]!='\0')
    {
        i++;
    }
    if (a[i] == '\0') 
    {
        printf("0\n");
    }
     else 
     {
        printf("%s\n", &a[i]);
     }
   
    return 0;
}