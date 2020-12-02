#include <stdio.h>
int main(){
	printf("how many numbers do you wish to enter? \n");

	int length, i; 
	int arr[1000];
	scanf("%d",&length);
	printf("\n");
	
	for(i=0;i<length;++i){
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<length;++i){
		if (arr[i]%2==0){
			if(arr[0]<arr[i]){
			arr[0]= arr[i];
			}
		}
	}

	printf("maximum value: %d\n",arr[0]);
	printf("I HATE even so I hide ALL the even :)") ;
	return 0;
}
