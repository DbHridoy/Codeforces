#include<stdio.h>
#include<string.h>
int main()
{
    char temp,s[101];
    int a,i,j;
    gets(s);
    a=strlen(s);
    for(i=0; i<a-2; i+=2)
    {
        for(j=i+2; j<a; j+=2)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    puts(s);
    return 0;
}
