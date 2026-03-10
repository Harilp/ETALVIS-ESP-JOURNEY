/*write a program to get a number from the user and print the reverse of the number*/

/*#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the number:");
    scanf("%d",&a);
    loop: if(a != 0){
      b=a%10;
      printf("%d\n",b);
      a=a/10;
      goto loop;
    }
    return 0;
}*/

// or

#include <stdio.h>
int main()
{   int a,d,e,b,c;
    e = 1;
    printf("enter the number:");
    scanf("%d",&a);;
    int j = a;
    loop:  if(a > 9 ){
            e = e*10;
            a = a/10;
            goto loop;}
    c=0;
    loop1: if(j >= 1){
      b=j%10;
      c = (b*e)+c;
      j=j/10;
      e = e/10;
      goto loop1;}
    printf("the reverse of the number is =%d\n",c);
    return 0;
}