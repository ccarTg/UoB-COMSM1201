#include<stdio.h>
int main(){
	char a[255];
	int i;
	
	printf("input a sentence: \n");
	gets(a);
	
	i=0;
	while(a[i]!='\0'){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
			a[i] = a[i]-32;
		}
		i++;
	}
	printf("After converting: ");
	puts(a);
		
	return 0;
}
