#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef enum bool {false, true} bool;

void strmerge(const char* s1, const char* s2, char* s3);

#define LARGESTRING 1000

int main(void)
{
    char s[LARGESTRING];
    
    strmerge("Hello World!", "World! & Everyone.", s);
    assert(strcmp(s, "Hello World! & Everyone.")==0);
    
    strmerge("The cat sat", "sat on the mat.", s);
    assert(strcmp(s, "The cat sat on the mat.")==0);
    
    strmerge("The cat sat on the mat", "The cat sat on the mat.", s);
    assert(strcmp(s, "The cat sat on the mat.")==0);
    
    strmerge("One ", "Two", s);
    assert(strcmp(s, "One Two")==0);
    
    strmerge("", "The cat sat on the mat.", s);
    assert(strcmp(s, "The cat sat on the mat.")==0);
    
    strmerge("The cat sat on the mat.", "", s);
    assert(strcmp(s, "The cat sat on the mat.")==0);
    
    strmerge("123412341234", "1234", s);
    assert(strcmp(s, "123412341234")==0);
    
    return 0;
}

void strmerge(const char* s1, const char* s2, char* s3)
{
    char *pDest, *pSrc1, *pSrc2, *pSpace;
    int cnt = 0;
    int i;
    
    pSrc1 = s1;
    pSrc2 = s2;
    pSpace = s2;
    pDest = s3;
    
    while(*pSpace != ' ')//find first word
    {
        cnt++;
        pSpace++;
    }
    
    while(*pSrc1 != '\0')
    {
        pSrc1++;
    }
    
    for(i = cnt; i > 0; i--) //pSrc1 point to the last word in the s1
    {
        pSrc1--;
    }
    
    while(*pSrc1 == *pSrc2 && *pSrc2 != ' ')
    {
        pSrc1++;
        pSrc2++;
    }
    
    if(*pSrc1 != '\0') 
    {
        pSrc2 = s2;
    }
    
    pSrc1 = s1;
    while(*pSrc1 != '\0')
    {
        *pDest = *pSrc1;
        pDest++;
        pSrc1++;
    }
    
    while(*pSrc2 != '\0')
    {
        *pDest = *pSrc2;
        pDest++;
        pSrc2++;
    }
    *pDest = '\0'; 
}





















