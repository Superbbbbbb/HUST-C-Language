#include<stdio.h>
void strcate(char[], char[]);
void strdelc(char[], char);
int main(void)
{
    char a[100],b[100],x;
    scanf("%s%s",b,a);                           	/*输入字符串*/
    scanf("%c",&x);								/*输入要删除的字符*/
    strcate(b, a); printf("%s\n", b);
    strdelc(b, 'a'); printf("%s\n", b);
    return 0;
}
void strcate(char t[], char s[])
{
    int i = 0, j = 0;
    while (t[i] != '\0')                             /*计算字符串t的长度*/
        i++;
    while (s[j] != '\0')                             /*计算字符串s的长度*/
    {
        t[i] = s[j];                                /*s接在t后*/
        i++;
        j++;
    }
    t[i] = '\0';                                  /*字符串t最后一位为null*/
}
void strdelc(char t[], char c)
{
    int j,k;
    for (j = 0; t[j] != '\0'; j++)
    {
        if (t[j] == c)
        {
            for (k = j; t[k] != '\0'; k++)
                t[k] = t[k + 1];                /*删去指定字符，后一个补上*/
        }
    }
