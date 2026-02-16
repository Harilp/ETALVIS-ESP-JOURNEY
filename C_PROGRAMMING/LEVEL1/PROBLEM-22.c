/*Get a three-digit number from user. If the sum of the digits is less than 10,
 then print the sum, otherwise add the digits of the sum. 
Note: The result should always be a single digit only.*/
#include <stdio.h>
    
int main(){
    int q,w,e,r,t;
    printf("enter a 3 digit number:");
    scanf("%d",&q);
    w=q/100;//100's
    e=q%100;
    r=e/10;//10's
    t=e%10;//1's
    int sum = w+r+t;
    int a = sum/10;
    int b = sum%10;
    int re = a+b;
    int p = re/10;
    int o = re%10;
    int result = p+o;
    printf("result:%d\n",result);
return 0;
}