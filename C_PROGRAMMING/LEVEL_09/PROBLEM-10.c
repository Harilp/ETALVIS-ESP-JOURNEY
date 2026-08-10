    /*Get 5 numbers from the user, reverse each number, create a new array, and print the sum of all numbers in the new array.*/
    #include <stdio.h>
    int main()
    {
        int i,a[5],b[5],c,d,g;
        printf("Enter the number:");
        for(i=0;i<5;i++)
        {
            scanf("%d",&a[i]);
        }
        g=0;
        for(i=0;i<5;i++)
        {
            c=0;
            while(a[i]!=0)
            {
                d=a[i]%10;
                c=c*10;
                c=c+d;
                a[i]=a[i]/10;
            }
            b[g]=c;
            g++;

        }
        printf("The reversed array are:");
        for(i=0;i<5;i++)
        {
            printf("%d",b[i]);
            if(i<4)
            {
                printf(",");
            }
        }
        return 0;
    }