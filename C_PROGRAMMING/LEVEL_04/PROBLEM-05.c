/*write a loop program to print odd numbers between 1 nad 9*/
#include <stdio.h>
int main()
{
    int x,y,z;
    x=1;
    loop: if(x <= 9){
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