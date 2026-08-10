/*write a program to print biggest 4 digit number which is divisible by 7 and 9*/
#include <stdio.h>
int main()
{
    int a,d,c,x;
    int largest;
    for(x=1000;x<=9999;x++)
    {
    c = x%7;
    d = x%9;
    
    if(c == 0 && d == 0 )
    {
        largest=x;
    }
}
printf("%d\n",largest);  
return 0;
}