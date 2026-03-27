/*write a programa to geta a number from the user print the total number of odd digits present in the number */
#include <stdio.h>
int main()
{
    int a,x,b,c;
    printf("Enter the number:");
    scanf("%d",&a);
    x = 0;
    for(;a!=0;a = a/10)
    {
        c=a%10;
        x = x+1;
    }
    printf("%d\n",x);
    return 0;
}