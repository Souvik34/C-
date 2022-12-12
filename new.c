#include<stdio.h>

int main()
{
    int c=1;
    for(int i=10;i<=100;i++)
    {
        int n=i;
        while(n>0)
        {
            int d= n%10;
             if((n%10)==1)
             {
                 c++;
             }
             n=n/10;

        }


        
    }

    printf("%d", c);
}