/*Get an integer and print each digit as a character. Print one character on one line.*/
#include <stdio.h>
int main()
{
     int b,i,d;
     char c[12];
     printf("Enter the number:");
    scanf("%d",&b);
     i=0;
     while(b!=0)
     {
        c[i]=(b%10)+'0';
        i++;
        b=b/10;
     }
     for(d=i-1;d>=0;d--)
     {
        printf("the char : %c\n",c[d]);
     }
    return 0;
}