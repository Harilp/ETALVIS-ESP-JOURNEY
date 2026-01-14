//get a three-digit from the user, make the one's digit 2, and then print
#include <stdio.h>

int main() {
    int a,b,c,d,e;
    printf("enter the 2 digit number:");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    d=c/10;
    e=c%10;
    int g2=(b*0)+2;
    int f1=b*100;
    int f2=d*10;
    int ld2 = f1+f2+g2; 
    printf("the number is:%d",ld2);
    return 0;
}
