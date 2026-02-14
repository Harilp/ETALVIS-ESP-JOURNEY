//get a three digit number from the user and print the ten's digit
#include <stdio.h>
    
int main(){
    int a,b,c;
    printf("enter the 3 digit number:");
    scanf("%d",&a);
    b=a%100;
    c=b/10;
    printf("result:%d",c);
return 0;
}