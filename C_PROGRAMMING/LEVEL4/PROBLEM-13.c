/*write a program to get a number from the user and interchange the first and last digit and print the result*/
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,j,k;
    printf("enter the number:");
    scanf("%d",&a);
    b=a%10;
    f=a;
    c=0;
    d = 10;
    loop: if(a != 0){
        a = a/10;
        c=c+1;
        if(a > 0 && a <= 9){
            j = a;}
        if(a > 9 ){
            d = d*10;
            e = b*d;}
        goto loop;}
    int o = f%d;
    int p = (o/10)*10;
    int h = k*10;
    int result = e+p+j;  
printf("the reverse of first and last digit = %d\n",result);
    return 0;
}