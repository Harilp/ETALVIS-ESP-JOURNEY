/*Get a three-digit number from the user and make the ten’s digit as 0, then print it.*/
#include <stdio.h>
    
int main(){
    int a,b,c,d,e;
    printf("enter a 3 digit number:");
    scanf("%d",&a);
    int n1=a/100;
    b=a%100;
    c=b%10;
    d=n1*100;
    e=d+c;
    printf("result:%d",e);
return 0;
}