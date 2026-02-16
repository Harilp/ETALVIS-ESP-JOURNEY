/*Get a three-digit number from the user and subtract five from that number if one’s digit number
 and 100’s digit number are odd, then print the result. Do not use “if”.*/
#include <stdio.h>
    
int main(){
    int a,b,c,d,e,result;
    printf("enter a 3 digit number:");
    scanf("%d",&a);
    b = a/100;//100's digit
    c = a%100;
    e = c%10;//1's digit
    int odd1 = b%2;
    int odd2 = e%2;
    int mul = odd1*odd2;
    d = -5*mul;
    result = a+d;
    printf("result:%d",result);    
return 0;
}