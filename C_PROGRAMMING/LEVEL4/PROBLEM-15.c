/*write a program get number fromthe user print whether that number is prime or not*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number:");
    scanf("%d",&a);
    if(a <= 1){
        goto loop1;
    }
    b = 2;
    c = 1;
    loop: if(b <= a-1){
        c = a%b;
        b = b+1;
        if(c == 0){   
            goto loop1;
        }
        goto loop;
    }  
     goto loop2;
    loop1:
        printf("the number is not prime\n");
        goto end;
    loop2:
        printf("the number is  prime\n");
    end:
    return 0;
}