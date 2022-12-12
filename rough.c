#include<stdio.h>
int main()
{
    int i;      // declaring a variable i with datatype int, int i.e. integer value
    float fl;   // declaring a variable fl with datatype float, float i.e. decimal values
    char c;     // dcelaring a variable c with datatype char, char i.e. character
    scanf("%d", &i); // "%d" for taking input integer. 
    scanf("%f", &fl);//  "%f" for taking input floating values
    scanf("%c", &c); //   "%c" for taking input character values 

    printf("%c\n",c); // printing character
    printf("%d\n", i); // printing integer
    printf("%f\n", fl); // printing floating values
}
     //scanf("%d %f %c", &i,&fl,&c) // format for taking input altogether