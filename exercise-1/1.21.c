#include<stdio.h>
#define A 7
#define C 5
#define M 11

int main(){
	int seed=0;
	int i;
	int LOOPS = 10;
	
	for(i=0; i<LOOPS; i++){
		seed = (A*seed + C)%M;
		printf("%d\n",seed);
	}
} 
