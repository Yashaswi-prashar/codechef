//Chef is playing Ludo. According to the rules of Ludo, a player can enter a new token into the play only when he rolls a 6 on the die.In the current turn, Chef rolled the number X on the die. Determine if Chef can enter a new token into the play in the current turn or not.
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int x;
        scanf("%d",&x);
        if(x==6){
            printf("YES \n");
        }
        else{
            printf("NO \n");
        }
        
    }
	// your code goes here
	return 0;
}

