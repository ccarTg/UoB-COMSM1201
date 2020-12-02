#include<stdio.h>
int isPrime();
int main()
{
	int a, b;
	int cnt=0;	
	
	for(a='a'; a<='z'; a++)
	{
		for(b='a'; b<='z'; b++)
		{
			if(a=='a' || a=='e' || a=='o' || a=='i' || a=='u')
			{
				if(b!='a' && b!='e' && b!='o' && b!='i' && b!='u')
				{
					if(a!=b){
						int a1=a-96;
						int b1=b-96;
						int p=a1+a1+b1;
						if(isPrime(p)==1)
						{
							cnt++;
							printf("%d %c%c%c\n",cnt,a,b,a);
						}
					}
					
				}
				
			} 
			if(b=='a' || b=='e' || b=='o' || b=='i' || b=='u')
			{
				if(a!='a' && a!='e' && a!='o' && a!='i' && a!='u')
				{
					
					if(b!=a){
						int a1=a-96;
						int b1=b-96;
						int p=a1+a1+b1;
						if(isPrime(p)==1)
						{
							cnt++;
							printf("%d %c%c%c\n",cnt,a,b,a);
						}
					}
					
				}
			}
		}
	}
	
	return 0;
}

int isPrime(int n)
{
	int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    };
    return 1;
}

int isVowel()
{
	
}
