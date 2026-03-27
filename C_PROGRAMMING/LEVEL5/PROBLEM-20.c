/*write a program to print the total number of single digit prime numbers*/
#include <stdio.h>
int main()
{
    int a,b,c,d,p;
    c = 0;
     for(a = 1;a<10;a++){
        if(a>1){
            p = 1;
        }
    for(b=2;b<=a-1;b++)
    {
        
        if(a%b==0){
            p = 0;
        }
    }
    if(p==1)
    {
        c = c+1;
    }
    }
    printf("%d",c);
     return 0;
}
   
