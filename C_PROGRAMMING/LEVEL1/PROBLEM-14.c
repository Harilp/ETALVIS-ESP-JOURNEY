//get a four digit number from the user and only rev erse the first two digits of the number, then print the number
#include <stdio.h>

int main() {
    int a,b,c,d,f,g,h,rfd;
    printf("enter the four digit number:");
    scanf("%d",&a);
    b=a/1000;
    c=a%1000;
    d=c/100;
    f=c%100;
    g=f/10;
    h=f%10;
    int f1=b*1000;
    int f2=d*100;
    int f3=h*10;
    rfd = f1+f2+f3+g;
    printf("the first 2 digit reverse number are:%d",rfd);

    return 0;
}
