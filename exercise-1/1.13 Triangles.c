#include<stdio.h>
#include<stdlib.h> 
int main(){
	int a, b, c;
	printf("input the length of each length of a triangle:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a<=0 || b<=0 || c<=0){
		printf("error\n");
	}
	else if (a+b<=c || a+c<=b || b+c<=a){
		printf("that can't be a triangle\n");
	}
	else if (abs(a-b)>=c || abs(a-c)>=b || abs(c-b)>=a){
		printf("that can't be a triangle\n");
	}
	else{
		printf("this is a triangle'\n");
	}
}
