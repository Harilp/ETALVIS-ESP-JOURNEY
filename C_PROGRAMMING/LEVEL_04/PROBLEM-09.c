/*write a loop program to print sum of two digits odd number who's ten's digit is seven*/
#include <stdio.h>
int main()
{
    int x,y,z,c;
    x = 70;
    int sum =0;
    loop: if(x <= 79){
        y = x%2;
        if(y == 1){
            sum = sum + x;
        }
        x++;
        goto loop;
    }
    printf("sum = %d\n",sum); 

    return 0;
}