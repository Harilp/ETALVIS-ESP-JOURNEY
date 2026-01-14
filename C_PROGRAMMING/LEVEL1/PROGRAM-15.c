//get atwo digit number fromt the user,make the one's digit 0,then print it
#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("enter the 2 digit number:");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    d=c*0;
    int ldo = (b*10)+d;
    printf("the number is:%d",ldo);
    return 0;
}
