//get a two-digit number fromt the user, make  the ten's digit 1, and then print it
#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("enter the 2 digit number:");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    d=(b*0)+1;
    int ldo = (d*10)+c;
    printf("the number is:%d",ldo);
    return 0;
}
