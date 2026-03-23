/*Write a program to get a number from user and if the last digit of the number is even print the same number. 
If the last digit of the number is odd, then subtract 1 from the last digit and print the number.
(Note: Last digit – MSB)*/
#include <stdio.h>
    
int main()
{
    int a,b,c;
    printf("enter the number:");
    scanf("%d",&a);
    b = a%10;
    c = a%2;
    if(c == 0)
    {
        printf("the number is even:%d",a);
    }
    if(c == 1)
    {
        a = a-1;
        printf("%d",a);
    }
return 0;
}