#include<stdio.h>
int main()
{       

    int n;
    printf("Enter the value of n\n");


        scanf("%d", &n); 
        int c=0;

        for(int i=1;i<=n;i++)
        {
            
            
              if(n%i==0)
              {
                  c++;
              }   
            }

            if(c==1)
            {
                printf("%d\n",n);

            }
            else
                {
                    printf("not a prime number\n");
                }
        }
