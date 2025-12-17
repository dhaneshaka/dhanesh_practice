#include<stdio.h>
#include<string.h>
int reverse(char s[])
{
    int start=0;
    int end=strlen(s)-1;
    
    while(start<end)
    {
        char t=s[start];
        s[start]=s[end];
        s[end]=t;
        start++;
        end--;
    }
}
int main()
{
    char s[100]="embedded linux is a great learning";
    char *a=strtok(s," ");
    char *b=strtok(NULL, " ");
    char *c=strtok(NULL, " ");
    char *d=strtok(NULL, " ");
    char *e=strtok(NULL, " ");
    char *f=strtok(NULL," ");
    

    reverse(a);
    reverse(b);
    reverse(c);
    reverse(d);
    reverse(e);
    reverse(f);

    printf("%s %s %s %s %s %s\n",a,b,c,d,e,f);
    return 0;
}
