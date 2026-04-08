/*write a program to get two numbers from the user and print the LCM of those two numbers*/
#include <stdio.h>
int main()
{
    int a,b,c,d,e,v,sum;
    printf("Enter the 2 number:\n");
    scanf("%d %d",&a,&b);
    d=a;
    e=b;
        for(;b>0;)
        {
            c = a%b;
             if(c==0)
            {
                v = b;
            }
            a=b;
            b=c;
        }
        sum = d*e;
        sum = sum/v;
        printf("the lcm is:%d",sum);
    return 0;
}