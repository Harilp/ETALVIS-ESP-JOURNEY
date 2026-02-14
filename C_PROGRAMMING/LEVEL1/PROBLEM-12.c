//get a two digit number from the use and print the reverse of it
#include <stdio.h>
    
int main(){
    int a,c;
    printf("enter the 3 digit number:");
    scanf("%d",&a);
    
    int v=(a/10);
    c=(a%10)*10;
    int result =c+v;
    printf("result:%d",result);
return 0;
}