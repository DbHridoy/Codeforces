#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    gets(word);
    word[0]=toupper(word[0]);
    puts(word);
    return 0;
}
