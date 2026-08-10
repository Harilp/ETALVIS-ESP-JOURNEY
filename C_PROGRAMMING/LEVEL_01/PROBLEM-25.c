/*Get a two-digit number from the user and print the sum of the digits.*/
#include <stdio.h>
    
int main(){
    int a,b,c;
    printf("enter a 2 digit number:");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    int sum = b+c;
    printf("result:%d",sum);
    
return 0;
}