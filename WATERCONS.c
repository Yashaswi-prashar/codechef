//Recently, Chef visited his doctor. The doctor advised Chef to drink at least 2000 ml of water each day.Chef drank X ml of water today. Determine if Chef followed the doctor's advice or not.//
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	{
	   int x;
	   scanf("%d",&x);
	   if(x>=2000)
	   {
	       printf("YES \n");
	   }
	   else {
	       printf("NO \n");
	   }
	}
	return 0;
}

