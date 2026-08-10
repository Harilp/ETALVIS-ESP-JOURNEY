/*Write a program to print the total number of single‑digit prime numbers.*/
#include <stdio.h>
int main()
{
    int a,b,c,v,prime;
    a=2;
    v=0;
    while(a<10 && a>1){
        prime=1;
        b=2;
    while(b<a && prime==1)
    {
       
        c=a%b;
        if(c==0)
        {
            prime=0;
        }
        b++;
    }
    if(prime==1)
    {
        v=v+1;
    }
     a++;
    }
    printf("%d",v);
    return 0;
}