#include<stdio.h>

int checkPalin(char input[256]);

int main(void)
{
    char input[256];
    int i, flag = 0;
    
    printf("input to check if it is a palindrome: \n");
    scanf("%s", input);
    
    flag = checkPalin(input);
    
    if(flag == 1) printf("it is palinfrome!");
    else printf("not a palinfrome");
    
    getchar();
    return 0;
}

int checkPalin(char input[256])
{
    int len, i;
    len = 0;
    
    for(i = 0; i < 256; i++)
    {
        if((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))
        {
            len++;
        } 
    }
    //printf("length = %d\n", len);
    
    for(i = 0; i < (len / 2); i++)
    {
        if(input[i] != input[len - i]) return 0; 
    }
    
    return 1;
}






















