/*Get a four-digit number from user and only reverse the
 last two digits of the number, then print the number.*/
#include <stdio.h>
    
int main(){
    int a,b,c,d,e,f,g;
    printf("enter a four digit number");
    scanf("%d",&a);
    b=a/100;
    g=b*100;//n3,n4
    c=a%100;
    d=c/10;//n1
    e=c%10;//n1*
    f=e*10;//n2
    int sum = g+f+d;
    printf("%d\n",sum);
return 0;
}