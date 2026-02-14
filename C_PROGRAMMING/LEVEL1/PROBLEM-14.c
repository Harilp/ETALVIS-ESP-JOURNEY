//get a four digit number from the user and reverse the first two digits of the number,print the result
#include <stdio.h>
    
int main(){
    int a,b,c,x,v,result;
    printf("enter the 4 digit number:");
    scanf("%d",&a);
    x=(a/1000);//n4
    int q=x*1000;
    b=a%1000;
    v=(b/100);//n3
    int w=v*100;
    c=(b%100);
    int r=c%10;//n2
    int u=r*10;
    int y=c/10;//n1
    result = q+w+u+y;
    printf("result:%d",result);
return 0;
}