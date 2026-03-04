/*write a program to get a number from the user and print the reverse of the number*/
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the number:");
    scanf("%d",&a);
    loop: if(a != 0){
      b=a%10;
      printf("%d",b);
      a=a/10;
      goto loop;
    }
    return 0;
}