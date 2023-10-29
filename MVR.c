
#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,x,y,messi,ronaldo;
	scanf("%d",&a);
	scanf("%d",&b);
	messi=2*a+b;
	
	scanf("%d",&x);
	scanf("%d",&y);
	ronaldo=2*x+y;
	if(messi==ronaldo){
	    printf("EQUAL");
	}
	else if (messi>ronaldo)
	{
	    printf("messi");
	}
else{
    printf("ronaldo");
}
	
	return 0;
}

