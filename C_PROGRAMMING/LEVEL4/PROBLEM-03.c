/*write a loop program to print sum of 1 to 5*/
#include <stdio.h>
int main()
{
    int x,y,sum;
    x = 1;
    sum = 0;
    
    loop: if(x<=5){
        sum = sum + x;
        x++;
        goto loop;
    }
    printf("result:%d",sum);
    return 0;
}