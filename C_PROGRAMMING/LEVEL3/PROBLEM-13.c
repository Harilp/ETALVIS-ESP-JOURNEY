/*Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and 
if digit 1 and digit 0 are different. If yes, print “Success”; otherwise, print “Failure”.*/
#include <stdio.h>
    
int main(){
    int a,b,c,d;
    printf("enter the four digit number:");
    scanf("%d",&a);
    b = a%100;
    c = b/10;
    d = b%10;
    if(c == d){
        printf("success");
    }
    else{
        printf("failure");
    }
return 0;
}