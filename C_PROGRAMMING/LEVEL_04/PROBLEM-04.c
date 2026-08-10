/*write a loop program to print sum of 6 to 1*/
#include <stdio.h>
int main()
{
    int a,b,c;
    a = 6;
    b = 0;
    loop: if(a >= 1){
        b = b + a;
        a--;
        goto loop;
    }
    printf("result:%d",b);
    return 0;
}