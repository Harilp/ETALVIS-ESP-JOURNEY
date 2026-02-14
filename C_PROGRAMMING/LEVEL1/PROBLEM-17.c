// get a three digit number from the user,make the one's digit 2 and then print it
#include <stdio.h>
    
int main(){
    int a,c;
    printf("enter the 3 digit number:");
    scanf("%d",&a);
    int u = (a/100)*100;
    int p = a%100;
    int d = (p/10)*10;
    c=((p%10)*0)+2;
    int r = c;
    int result = u+d+c;
    printf("result:%d",result);
    
    
    
return 0;
}