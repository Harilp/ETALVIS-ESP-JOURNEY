#include <stdio.h>

int main() {
    int x,a,b,c,y;
    printf("enter the number:");
    scanf("%d",&x);
    y=x-1;
    a=(x%2);
    b=a+y; // gives if the odd 
    c=a+1;
    int q=x*c; // gives if the number is even
    printf("if the number is odd same number will be printed:%d\n",b);
    printf("if the number is even same number will be printed:%d\n",q);
    return 0;
}
