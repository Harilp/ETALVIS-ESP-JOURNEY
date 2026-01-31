/*get a three digit number from user and subtract five from that number if the one's digit number and 100's digit number
are odd, then print the result. Do not use "if"*/
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the 3 digit number:");
    scanf("%d",&a);
    int n1=a/100;//100's number
    int nn1=a%100;
    int n2=a/10;//10's number
    int n3=a%10;//1's number
    b=n1%2;
    c=n3%2;
    d=b*c;//combining the 2 signal to one signal
    e=-5*d;
    int result=a+e;
    printf("the result is:%d",result);
    
    return 0;
}