#include <stdio.h>
int main(void){
	printf("how many numbers do you wish to enter? \n");

	int length, i; 
	float arr[1000];
	scanf("%d",&length);
	printf("\n");
	
	for(i=0;i<length;++i){
		scanf("%f",&arr[i]);
	}

	for(i=1;i<length;++i){
		if(arr[0]<arr[i]){
			arr[0]= arr[i];
		}
	}
	printf("maximum value: %.2f",arr[0]);
	
	return 0;
}

