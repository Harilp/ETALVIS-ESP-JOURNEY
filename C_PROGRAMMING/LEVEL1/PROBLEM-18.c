/*get a number from the user subtract 5 from that number if the number is odd,
then print the result, do not use if*/
#include <stdio.h>
    
int main(){
    int a,b,c,d;
    printf("enter the number:");
    scanf("%d",&a);
    b = a%2;
    c = -5*b;
    d = a+c;
    printf("result:%d",d);
    return 0;
}