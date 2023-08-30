#include <stdio.h>
#include <stdlib.h>
char strnins(char t[],char s[],int n);
int main()
{
    char t[100],s[100];
    int n;
    scanf("%s%s",t,s);							/*输入字符串t，s*/
    scanf("%d",&n);								/*输入插入的位置*/
    strnins(t,s,n);
    printf("%s",t);
    return 0;
}
char strnins(char t[], char s[], int n){
    int len1=0,len2=0,i;
    while (t[len1++]);							/*计算字符串t的长度*/
    while (s[len2++]);							/*计算字符串s的长度*/
    len1--;										/*减去最后一位null*/
    len2--;
    for (i=len1-1;i>n-1;i--)
        t[i+len2]=t[i];			/*将t从第n-1位开始的len1位复制到t末尾*/
    for(i=0;i<len2;i++)
        t[i+n]=s[i];			/*将t从第n-1位开始的len1位替换成s*/
    t[len1+len2]='\0';			/*t最后一位封口*/
    return t;
} 
