//get a number from the user if the number is odd then subtract 5 from the digit if the number is even print directly
#include <stdio.h>

int main() {
    int x,a,b,c;
    printf("enter the number:");
    scanf("%d",&x);
    a=x%2;
    b=-5*a;
    c=b+x;
    printf("the number is:%d",c);
    return 0;
}
