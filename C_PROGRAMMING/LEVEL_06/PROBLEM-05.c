/*write a loop program to print the odd numbers from 1 to 9*/
#include <stdio.h>
int main()
{
    int a,b;
    a=1;
    while(a<=9)
    {
        b = a%2;
          if(b==1)
        {
            printf("%d\n",a);
        }
        a++;
      
    }
    
    return 0;
}