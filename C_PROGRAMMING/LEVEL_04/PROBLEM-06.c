/*write a loop program to print  two digit odd numbers below 20*/
#include <stdio.h>
int main()
{
    int x,y,z;
    x=11;
    loop: if(x <= 20){
        y = x%2;
        z = y*x;
        if(y != 0){
            printf("%d\n",z);
        } 
        x++;
        goto loop;
        
    }
    
    return 0;
}