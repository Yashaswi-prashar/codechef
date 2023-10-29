// has been working hard to compete in MasterChef.He is ranked X out of all contestant. However, only 10 contestants would be selected for the finals.Check whether Chef made it to the top 10 or not?
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int x;
	    scanf("%d",&x);
	    if(x<=10){
	        printf("YES \n");
	        
	    }
	    else
	    {
	        printf("NO \n");
	        
	    }
	        
	    
	}
	return 0;
}

