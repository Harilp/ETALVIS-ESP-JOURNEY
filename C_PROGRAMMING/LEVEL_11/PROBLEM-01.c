/*Get a number from the user and print the same.
Change the value without directly changing it and print the same.*/
#include <stdio.h>
int main()
{
    int a,*b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=&a;
    printf("Enter the number that have to be changed to:");
    scanf("%d",&*b);
    printf("%d",a);
    return 0;
}