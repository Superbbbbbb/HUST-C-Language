#include<stdio.h>
int main()
{
int i, x, k, flag=0;
        printf("本程序判断合数,请输入大于1的整数,以Ctr+2结束\n");
        while(scanf ("%d", &x) !=EOF){
for(i=2,k=x>>1;i<=k;i++)              /*flag未初始化，加flag=0*/
{
if(!x%i)                           /*!优先级高于%，x%i外加括号*/
        flag=1;                       /*if语句未加{ }*/
break;
}
if(flag==1)
printf("%d是合数\n",x)；
else printf("%d不是合数\n",x);
}
return 0;
}
