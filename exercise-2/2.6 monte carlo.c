#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	
	printf("input n: ");
	int n, c = 0;
	scanf("%d", &n);
	
	int i;
	for(i = 1; i <= n; i++)
	{
        double x = -1.0 + 2.0 * rand() / RAND_MAX;
        double y = -1.0 + 2.0 * rand() / RAND_MAX;
        if (x * x + y * y < 1.0)
        {
        	++c;
        }
	}
	
	double Pi = 4.0 * c / n;
	printf("the approximation pi will be: %lf\n", Pi);
	
	return 0;
}

