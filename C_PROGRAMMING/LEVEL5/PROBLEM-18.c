/*Write a program to get a number from the user, then print whether that number’s first two digits
(the tens digit and the ones digit) form a prime number.
Answer:
Input: 359 → Output: Prime
Input: 3577 → Output: Not Prime*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number:");
    scanf("%d",&a);
    a = a%100;
    
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