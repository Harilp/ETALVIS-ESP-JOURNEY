//get a number from the user and check if the number equals 50. if yes, the print 1,otherwise print 0
#include <stdio.h>
    
int main(){
    printf("enter the number:");
    int a;
    scanf("%d",&a);
    int b= (a == 50);
    printf("%d",b);
return 0;
}