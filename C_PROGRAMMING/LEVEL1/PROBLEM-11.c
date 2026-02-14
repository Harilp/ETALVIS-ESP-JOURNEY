//get a three digit number from the use and print the um of the digits
#include <stdio.h>
    
int main(){
    int a,b,c;
    printf("enter the 3 digit number:");
    scanf("%d",&a);
    int x=a/100;
    b=a%100;
    int v=b/10;
    c=b%10;
    int sum = x+v+c;
    printf("result:%d",sum);
return 0;
}