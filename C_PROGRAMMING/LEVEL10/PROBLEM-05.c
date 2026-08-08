/*Get an integer and print it as a string.*/
#include <stdio.h>
int main()
{
    int a,i,t=0;
    char b[100],x,y,z;
    y=0;
   
    printf("Enter the number:");
    scanf("%d",&a);
     i=a;
    while(i!=0)
    {
        t++;
        x=i%10;
        b[y]=x;
        i=i/10;
        y++;
    }

    char c[t+1];
    for(y=0,z=t-1;z>=0;y++,z--)
    {
        c[y]=b[z]+'0';
    }
    c[t]='\0';
    printf("%s",c);
    return 0;
}