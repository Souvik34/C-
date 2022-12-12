#include<stdio.h>
int main()
{
    // int n;
    // printf("Enter n");
    // scanf("%d",&n);

    // if(n%2==0)
    // {
    //   printf("Even");  
    // }
    // else
    // {
    //     printf("Odd");
    // }


    int age;
    printf("Enter your age");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("Eligible to vote");

    }

   else if(age<18)
    {
        printf(" Not Eligible to vote ");
    }

    else{
         printf("invalid age");
         
    }


}