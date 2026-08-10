//get a two digit number from the user, make the one's digit 0.then print it.
#include <stdio.h>
    
int main(){
    int a,c;
    printf("enter the 2 digit number:");
    scanf("%d",&a);
    c=(a/10)*10;
    printf("result:%d",c);
return 0;
}