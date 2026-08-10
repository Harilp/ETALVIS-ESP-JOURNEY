/**/
#include <stdio.h>
int main()
{
    int a,b,c,d,e,v,sum,f,g;
    printf("Enter the 2 number:\n");
    scanf("%d %d %d",&a,&b,&g);
    d=a;
    e=b;
    f=g;

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
        
        int m,n,x;
        x=sum;
        for(;f>0;)
        {
            m = x%f;
            if(m==0)
            {
                n = f;
            }
            x = f;
            f = m;
        }
        int lcm = sum*g;
        lcm = lcm/n;

        printf("the lcm is:%d",lcm);
    return 0;
}