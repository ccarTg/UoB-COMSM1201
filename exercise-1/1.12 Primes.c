#include <stdio.h>
int isPrime(int num)
{
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    };
    return 1;
}
	
int main(){
	int n;
	printf("how many primes do you want to show: \n");
	scanf("%d",&n);
	
	int i;
	int cnt=1;
	for(i=2; cnt<n+1; i++){
		if(isPrime(i) == 1){
			cnt++;
			printf("%d\n",i);
		}
	}
}

