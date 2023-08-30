#include<stdio.h>
#include<stdlib.h>
#define N 100
struct nbl{
	int num;
	int op[N];
};
void push(struct nbl *st, int n){
	st->num++;
	st->op[st->num]=n;										/*推入*/
}
void pull(struct nbl *st, int *n){
	*n=st->op[st->num];
	st->num--;												/*推出*/
}
int main()
{
	char s[100],c;
	int flag=0,i=0,n,m,b;
	gets(s);
	int result=0;
	struct nbl *number;
	number=(struct nbl*)malloc(sizeof(struct nbl));
	number->num=-1;
	i=0;
	while(s[i]){
		flag=0;
		if(s[i]=='-')								/*从后向前进行运算*/
		{
			if(s[i+1]>='0'&&s[i+1]<='9')			/*判断是数字还是符号*/
			{
				flag=1;
				i++;
			}
		}
		if(s[i]>='0'&&s[i]<='9')
		{
			b=0;
			b+=s[i]-'0';
			i++;
			while(s[i]>='0'&&s[i]<='9'){
				b*=10;
				b+=s[i]-'0';
				i++;
			}
			if(flag==1)
				b*=(-1);
			push(number,b);
		}
		else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
		{
			pull(number,&n);
			pull(number,&m);
			if(s[i]=='+')
				result=m+n;
			else if(s[i]=='-')
				result=m-n;
			else if(s[i]=='*')
				result=m*n;
			else if(s[i]=='/')
				result=m/n;
			push(number,result);
			i++;
		}
		else
			i++;									/*下一个数字或符号*/
	}
	printf("%d",result);
}
