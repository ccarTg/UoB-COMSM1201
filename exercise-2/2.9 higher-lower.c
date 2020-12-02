#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define low 1
#define high 1000
 
int main()
{
    srand(time(0));
    
    int a = (rand() % high + low);
    
    printf("please input the number you guess: ");
    int n;
    scanf("%d", &n);
    
    int cnt = 1;
    for(cnt = 1; cnt <= 10; cnt++)
    {
        if(n == a)
        {
            printf("bingo!!");
			break;
        }
        if(n > a)
        {
            printf("too high, try again: ");
            scanf("%d", &n);
        }
        else
        {
            printf("too low, try again: ");
            scanf("%d", &n);
        }
        if(cnt == 10)
	    {
	        printf("you are failed...");
	    }
    }
    
    return 0;
}
