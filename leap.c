#include<stdio.h>
int main()

{
    int n;
    printf("Enter the year\n");
    scanf("%d\n",&n);

    int r=n%10;// last
    int p=n%100; //second last

    if((r==0)&&(p==0))
    {
        if((n%400)==0)
        {
            printf("Leap year\n");
        }
        else
        {
            printf("Not a leap year\n");
        }
    }

    else if(n%4==0)
    {
        printf("Leap year\n");
    }

    else
    {
        printf("Not a leap year\n");
    }
}