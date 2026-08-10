//get a three digit number from the user
 and print the hundred's digit
#include <stdio.h>
    
int main(){
    int a,b;
    printf("enter the 3 digit number:");
    scanf("%d",&a);
    b=a/100;
    printf("result:%d",b);
return 0;
}