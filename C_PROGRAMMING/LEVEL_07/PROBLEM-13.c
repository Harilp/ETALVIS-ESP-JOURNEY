/*Write a program to get a number from the user and print the reverse of that number.
Function Name: disp_reverse_number*/
#include <stdio.h>
void disp_reverse_number(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    disp_reverse_number(a);
}
void disp_reverse_number(int n)
{
    int a,b,c;
    c=0;
    while(n!=0)
    {
        a=n%10;
        c=a+c;
        c=c*10;
        n=n/10;
    }
    c=c/10;
    printf("%d",c);

}