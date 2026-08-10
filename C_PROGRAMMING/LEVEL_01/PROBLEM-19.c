/*get a number from the user and subtract 5 from that number 
if that number's ten's position digit is odd then print the result,do not use "if".*/
#include <stdio.h>   
int main(){
    long int a,b;
    printf("enter the number:");
    scanf("%ld",&a);
    b=a%100;
    int d = b/10;
    int e = d%2;
    int x = -5*e;
    long int y = a+x;
    printf("%ld",y);   
return 0;
}