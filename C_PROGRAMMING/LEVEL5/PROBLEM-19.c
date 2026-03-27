/*Write a program to get a 4-digit number from the user, then print whether that number’s middle two digits 
(the hundreds digit and the tens digit) form a prime number.
Example:
Input: 6359 → Output: Not Prime
Input: 3537 → Output: Prime*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the four digit number:");
    scanf("%d",&a);
    a = a%1000;
      printf("a = %d\n",a);
    a = a/10;
    printf("a = %d\n",a);
    
    if(a == 1 || a == 0)
    {
        goto x;
    }
    c = 0;
    for(b = 2;b < a;b++)
    {
        c=a%b;
        if(c == 0)
        {
            goto x;
        }
    }
    goto y;
    x:
    printf("the number is not prime");
    goto end;
    y:
    printf("the number is prime");

    end:
    
    return 0;
}