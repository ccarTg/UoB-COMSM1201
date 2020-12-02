#include<stdio.h>
int main(){
	int a=0, b=35;
	int i=a+rand()%(b-a);
	
	int gametype;
	printf("which game do yu want to play?\nIuput 1 for odd/even, 2 for roulette:\n");
	scanf("%d",&gametype);
	
	if(i == 0){
		printf("you lose\n");
	}
		
	if(gametype == 1){ /*odd/even game*/
		printf("welcome to odd/even game, please input a number:\n");
		int guess;
		scanf("%d",&guess);
		if(guess%2 == i%2){
			printf("you win\n");
		}else{
			printf("you lose\n");
		}
	}
	if(gametype == 2){ /*roulette*/
		printf("welcome to roulette, please input a number:\n");
		int guess;
		scanf("%d",&guess);
		if(guess == i){
			printf("you win\n");
		}else{
			printf("you lose\n");
		}
	}
	
	return 0; 
} 


