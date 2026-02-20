/*Get a number from the user and check 
if the number is greater than 50. If yes, then print “Success”; otherwise, print “Failure”.*/
#include <stdio.h>
    
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a > 50){
        printf("success");
    }
    else{
        printf("failure");
    }  
return 0;
}