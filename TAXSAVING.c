//Your task is very simple: given two integers A and B, write a program to add these two numbers and output the sum.
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	{
	    int x,y;
	    scanf("%d",&x);
	    scanf("%d",&y);
	    
	    printf("%d \n",x-y);
	}
	return 0;
}

