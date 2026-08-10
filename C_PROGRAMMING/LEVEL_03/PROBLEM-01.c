/*get a number from the user check if the number equals 50if yes print "success" other wise print "failure"*/
#include <stdio.h>

int main() {
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a == 50){
        printf("success");
    }
    else{
        printf("failure");
    }
    return 0;
}
