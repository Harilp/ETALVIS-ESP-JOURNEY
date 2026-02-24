/*write a loop program to print  two digit odd numbers below 20*/
#include <stdio.h>
int main()
{
    int x,y,z,a,b,c;
    x=11;
    loop: if(x <= 99){
        y = x%2;
        z = y*x;
        if(y != 0){
            a = z/10;
            b = z%10;
            c = a + b;
            if(c == 7){
            printf("%d\n",z);
        }
        } 
        x++;
        goto loop;
        
    }
    
    return 0;
}