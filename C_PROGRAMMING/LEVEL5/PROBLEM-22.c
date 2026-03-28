/*get a number from the user print the total number of two digit odd numbers in the numbers*/
#include <stdio.h>
int main()
{
    int a,b,c,d,x;
    printf("Enter the number:");
    scanf("%d",&a);
    b = 0;
    for(;a!=0;)
    {
        c = a%10;
        a = a/10;
        d = a%10;
        x = (d*10)+c;
        
        if(x>=10){
            
        if(x%2==1)
        {
            b = b+1;
        }
    }
    }
    printf("The total number of two digit odd numbers in the numbers are:%d\n",b);
    
    return 0;
}