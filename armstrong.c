#include<stdio.h>

int main()
{

    int r=0;
    printf("Enter a number\n");
    int n;
    scanf("%d\n",&n);
    int t=n;

    while(n>0)
    {
        int d= n%10;
        r=r+ (d*d*d);
        n= n/10;
    }
    if(t==r)
    {
        printf("Armstrong Number\n");

    }
    else
    {
        printf("Not an armstrong Number\n");
    }
    return 0;
}