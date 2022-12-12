#include <stdio.h>

int main(void) {
	// your code goes here
	int  age;
	printf("Enter your age\n");

	scanf("%d",&age);
	printf("You have entered %d as your age\n", age);

	if(age>18)
	{
		printf("you can vote\n");
	}	
	else if(age<18) 
	{
		printf("You acnnot caste your vote\n");
	}
	
	    
	return 0;
}

