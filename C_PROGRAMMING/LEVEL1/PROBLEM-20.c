/*Get a two-digit number from user and subtract 5 from that number if the 
sum of the digits of the number is odd, then print the result. Do not use “if”.*/
#include <stdio.h>
    
int main(){
    printf("enter a 2 digit number:");
    int a,b,c,d,result;
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    int sum = b+c;
    int oe = sum%2;
    d = -5*oe;
    result = a+d;
    printf("result:%d",result);
return 0;
}