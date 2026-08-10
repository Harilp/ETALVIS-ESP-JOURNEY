//get a 2 digit number from the user, make the ten's digit 1, and then print it
#include <stdio.h>
    
int main(){
    int a,c,d;
    printf("enter the 2 digit number:");
    scanf("%d",&a);
    d = a%10;
    c=((a/10)*0)+1;
    int r = c*10;
    int result = r+d;
    printf("result:%d",result);
    
return 0;
}