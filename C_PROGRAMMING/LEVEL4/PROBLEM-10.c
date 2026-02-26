/*Write a program to get a number from user print the total number of digits in that number*/
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the number:");
    scanf("%d",&a);
    b=0;
    if(a == 0){
        b=1;
    }
    loop: if (a > 0){
        a = a/10;
        b = b+1;
        goto loop;   
    }
    printf("b = %d\n",b);
   
    
    return 0;
}