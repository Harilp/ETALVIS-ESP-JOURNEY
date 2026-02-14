//get a two-digit number from the user and print the one's digit,
#include <stdio.h>
   
int main(){
    int a,b;
    printf("enter a 2 digit number:");
    scanf("%d",&a);
    b=a%10;
    printf("the remainder is:%d",b);
}
