#include<stdio.h>
int main(){
	int hour1, hour2, min1, min2, hour_diff, min_diff;
	printf("enter two times: \n");
	scanf("%d:%d %d:%d",&hour1,&min1,&hour2,&min2);
	
	if(hour1>24 || hour2>24 || min1>60 || min2>60){
		printf("error!");
	}
	
	if(hour2<hour1){
		hour_diff = hour2-hour1+24;
	}else{
		hour_diff = hour2-hour1;
	}
	
	if(min2>min1){
		min_diff = min2-min1;
	}else{
		min_diff = min2-min1+60;
		hour_diff = hour_diff-1; 
	}
	
	printf("Difference is : %d:%d",hour_diff,min_diff);
	
	return 0;
}
