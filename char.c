#include<stdio.h>
int main()
{
    char str[]= "ABCD";
    int i=0;

    while(str[i]!='\0') 
    {
        i++;
    }
    printf("%d", i);
}