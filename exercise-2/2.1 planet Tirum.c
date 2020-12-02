#include<stdio.h>

int isVowel(char c);

int main()
{
	int cnt = 0;
	char a, b, c;
	
	for(a = 'a'; a <= 'z'; a++)
	{
		for(b = 'a'; b <= 'z'; b++)
		{
			for(c = 'a'; c <= 'z'; c++)
			{
				if(isVowel(a) == 0 && isVowel(b) == 1 && isVowel(c) == 0)
				{
					cnt++;
					printf("%d %c%c%c\n", cnt, a, b, c);
				}
			}
		}	
	}
}

int isVowel(char c){
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
	{
		return 1;
	}
	return 0;
}
