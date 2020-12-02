#include<stdio.h>
#include<math.h> 

int main(){
	printf("please input x:\n");
	int x;
	scanf("%d",&x);
	
	int c;
	c = sin(x)*sin(x) + cos(x)*cos(x);
	
	printf("sin(%d)*sin(%d)+cos(%d)*cos(%d)=%d",x,x,x,x,c);
	
	return 0;
}
