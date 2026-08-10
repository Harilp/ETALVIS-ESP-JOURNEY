/*Get a four-digit number from the user and check 
if the first 2 digits and last 2 digits are the same. If yes, print “Success”; otherwise, print “Failure”.*/
#include <stdio.h>
    
int main(){
    int a,b,f;
    printf("enter the four digit number:");
    scanf("%d",&a);
    f = a/100;
    b = a%100;
    
    if(f == b){
        printf("success");
    }
    else{
        printf("failure");
    }
return 0;
}