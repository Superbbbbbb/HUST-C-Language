#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[200];
    scanf("%s",s);
    int i=0,j,k,len;
    len=strlen(s);
    while(s[i]!='\0')
    {
        for(j=0;j<len;j++)
        {
            for(k=j+1;k<len;k++)
            {
                if(s[j]==s[k])
                    s[k]='\0';
            }
        }
        i++;
    }
    for(i=0;i<len;i++)
    {
        if(s[i]!='\0')
            printf("%c",s[i]);
    }
    return 0;
}
