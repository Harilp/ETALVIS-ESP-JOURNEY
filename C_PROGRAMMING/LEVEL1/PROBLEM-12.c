//get a two digit number from the use and print the reverse of it
#include <stdio.h>
    
int main(){
    int a,b,c;
    printf("enter the 3 digit number:");
    scanf("%d",&a);
    int x=a/100;
    b=a%100;
    int v=(b/10)*10;
    c=(b%10)*100;
    int result =c+v+x;
    printf("result:%d",result);
return 0;
}