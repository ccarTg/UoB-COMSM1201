#include<stdio.h>
#define N 50000

int HailstoneLength(int n)
{
	int length = 1;
	while(n != 1){
		length++;
		if(n%2 == 0)
		{
			n = n / 2;
		}else
		{
			n = 3 * n + 1;
		}
	}
	return length;
}

int HailstoneMax(int n)
{
	int max = 1;
	while(n != 1){
		if(n%2 == 0)
		{
			n = n / 2;
		}else
		{
			n = 3 * n + 1;
		}
		if(n > max)
		{
			max = n;
		}
	}
	return max; 
}

int main()
{
	int j, n, jmax, jnum, num, nummax = 1, max = 0;
	for(j = 1; j < N; j++)
	{
		n = HailstoneLength(j);
		if(n > max)
		{
			max = n;
			jmax = j;
		}
		
		num = HailstoneMax(j) ;
		if(num > nummax)
		{
			nummax = num;
			jnum = j;
		}
	}
	printf("longest sequence number is : %d\n", jmax);
	printf("biggest sequence number is : %d\n", jnum);
	
	return 0;
}
