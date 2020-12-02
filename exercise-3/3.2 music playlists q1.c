#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *getRandList(int num);

int main(void)
{
    int num, i;
    int *p;
    
    srand((unsigned)time(NULL));
    
    printf("how manys songs required ? ");
    scanf("%d", &num);
    
    p = getRandList(num);
    
    for(i = 0; i < num; i++)
    {
        printf("%d ", *p++);
    }

    return 0; 
} 

int *getRandList(int num)
{
    int list[num];
    int randNum, i, tmp;
    
    for(i = 0; i < num; i++)
    {
        list[i] = i+1;
    }
    
    for(i = 0; i < num; i++)
    {
        randNum = rand() % num + 1;
        tmp = list[i];
        list[i] = list[randNum];
        list[num] = tmp;
    }
    
    return list;
}



























