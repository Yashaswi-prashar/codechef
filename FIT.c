//Chef wants to become fit for which he decided to walk to the office and return home by walking. It is known that Chef's office is X km away from his home.If his office is open on 5 days in a week, find the number of kilometers Chef travels through office trips in a week.
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++){
	    int x;
	    scanf("%d",&x);
	    
	    printf("%d \n",2*5*x);
	}
	return 0;
}

