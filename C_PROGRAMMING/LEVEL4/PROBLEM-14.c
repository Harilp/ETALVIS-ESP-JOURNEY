/*"Write a program to get a number from user and if the last digit of the number is even print the same number. 
If the last digit of the number is odd, then subtract 1 from the last digit and print the number.
 (Note: Last digit - MSB)"*/
#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the number:");
    scanf("%d",&a);
    d = a;
    b = 1;
    loop: if(a > 9){
        b = b*10;
        //printf("b = %d\n",b);
        a = a/10;
        goto loop;
    }
    c = a%2;
    if(c == 1){
        a = a-1;
        a = a*b;
        printf("a = %d\n",a);
        d = d%b;
        printf("d = %d\n",d);
        int result = a+d;
        printf("result :%d",result);
    }
    else{
        printf("result :%d",d);
    }
    
    return 0;
}