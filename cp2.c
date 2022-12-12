#include<stdio.h>

int main()
{

    int t;
    scanf("%d", &t);
    while(t--)
    {
 int n, s=0, i;

scanf("%d", &n);

int arr[n];

for (i = 0; i < n; i++) {
    scanf("%d", arr[i]);
       s=s+arr[i];
   
   for (int i = 0; i < n; i++)
   {
       for (int j = i+1; j < n; j++)
       {
         if(arr[i]>arr[j])
         {
             int a= arr[i];
             arr[i]= arr[j];
             arr[j]= a;
         }
       }
       
   }
   s=s-arr[0];
   printf("%d", s );
   
    }
    return 0;
}