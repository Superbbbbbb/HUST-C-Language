#include<stdio.h>
#include<string.h>
void RemoveDuplicate(char *s);
int main()
{
	char str[200];
    while(fgets(str, 200, stdin) != NULL)
    {
   	    RemoveDuplicate(str);
        printf("%s", str);
    }
    return 0;
}
void RemoveDuplicate(char *s)
{
    int r, w, i, len;
    len = strlen(s);                         		/*计算字符串长度*/
    for (r = w = 0; r < len; r++)
    {
   	    if(s[r]!='\0')
        {
            s[w++]=s[r];                    		/*保存字符串*/
            for (i = r + 1; i < len; i++)
            {
                if(s[i]==s[r])
            	    s[i] = '\0';					/*删去相同字符*/
            }
        }
    }
    s[w]=’\0’;
}
