/*write a program to get the number from the user print the total number of digits in that number*/
#include <stdio.h>
int main()
{
    int i,a,b,c;
    printf("enter the number:");
    scanf("%d",&a);
    b = 0;
    for(; a != 0;)
    {
        a=a/10;
        b = b+1;
    }
    printf("%d\n",b);
    
    return 0;
}