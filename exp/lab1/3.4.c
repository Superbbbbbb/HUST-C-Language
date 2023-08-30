#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[10000];
    int i=0,j,count;
    gets(s);
    count=strlen(s);
    while(i<count)
    {
        if(s[i]==32&&s[i+1]==32)
        {
            for(j=i+1;j<count;j++)
                s[j]=s[j+1];
        }
        else i++;
    }
    printf("%s",s);
    return 0;
}
