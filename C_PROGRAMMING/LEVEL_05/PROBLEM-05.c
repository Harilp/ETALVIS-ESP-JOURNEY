/*write a loop program to print odd numbers between 1 and 9*/
#include <stdio.h>
int main()
{
    int a,b;
    
    for(a=1;a<=9;a++)
    {

        b = a%2;
        if(b==1){
            printf("%d\n",a);
        }
    }
    
    return 0;
}