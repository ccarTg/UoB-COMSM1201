#include<stdio.h>
int main()
{
	printf("How much money would you like?   ");
	int i;
	scanf("%d",&i);
	printf("\n");
	
	while(i % 20 != 0)
	{
		int rest = i / 20;
		int low = rest * 20;
		int high = (rest + 1) * 20;
		printf("I can give you %d or %d, try again.\nHow much money would you like?   ", low, high);
		scanf("%d",&i);
	}
	
	printf("OK, dispensing ... ");
	
	return 0;
}
