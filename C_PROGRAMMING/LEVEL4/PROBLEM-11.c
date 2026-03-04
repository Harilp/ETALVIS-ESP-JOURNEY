/*Write a program to get a number from the user and print the sum of all digits.*/
#include <stdio.h>
int main()
{
    int a,b,c,d,v;
    printf("enter the number:");
    scanf("%d",&a);
    c=0; 
    loop: if(a != 0){
      b=a%10;
      c = c+b;
      a=a/10;
      goto loop;
    } 
    printf("sum is :%d",c);
   return 0;
}
