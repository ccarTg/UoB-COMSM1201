#include <stdio.h>
int main(){
	int n = 77;
	printf("%d\n",n);
	
	while(n!=1){
		if(n%2 == 0 && n!=1){
			n = n/2;
			printf("%d\n",n);
		}
		if(n%2 != 0 && n!=1){
			n = 3*n+1;
			printf("%d\n",n);
		}
	} 
	return 0;
}
