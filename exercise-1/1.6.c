#include <stdio.h>
#include <stdlib.h>
int main(){
	int median = RAND_MAX/2;
	int cnt = 0;
	
	int plus_cnt = 0;
	int minus_cnt = 0;
	int diff = 0;
	int i;
	
	for(i=0;cnt<=500;cnt++){
		int c = rand();
		if(c>median){
			plus_cnt++;
		}
		if(c<median){
			minus_cnt++;
		}
		diff = plus_cnt - minus_cnt;
		printf("%d\n",diff);	
	}

	return 0;
}
