/*get a number from the user and subtract 5 from the number if the number's ten's position digit is odd 
  then print the result.do not use if.
eg: input : 685  output : 685
    input : 89172 output : 89167*/
#include <stdio.h>
    
int main(){
    int a,b,c;
    printf("enter the number:");
    scanf("%d",&a);
    b=a%100;
    c=b/10;
    int checkodd=c%2;
    int sublogic=-5*checkodd;
    int result = a+sublogic;
    printf("the number is:%d",result);
return 0;
}
