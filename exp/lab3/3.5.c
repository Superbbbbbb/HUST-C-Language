main.c:
#include "stdio.h"
#include "string.h"
typedef struct c_node{
    char data;
    struct c_node *next;
} C_NODE;
#include "stu.h"
int main()
{
char s[1000],*pc=s;
int len=0;
C_NODE *head,*p;
scanf("%[^\n]",s);
createLinkList(&head,s);
for(p=head;p;p=p->next) len++;
if (len!=strlen(s)) { printf("单链表长度不正确");return 1;}
else for(p=head;p;p=p->next)
        if (p->data!=*pc++)
{
printf("单链表有错误结点");
return 1;
}
judgePalindrome(head);
return 1;
}
stu.h:
typedef struct c_node{
    char data;
    struct c_node *next;
} C_NODE;
void createLinkList(C_NODE **headp, char s[]) {
    C_NODE *head=NULL,*tail;
    char *p=s;
    head=(C_NODE *)malloc(sizeof(C_NODE));
    head->data=*p++;
    tail=head;
    while(*p){
        tail->next=(C_NODE *)malloc(sizeof(C_NODE));		/*分配内存*/
        tail=tail->next;							/*tail指向下一个结点*/
        tail->data=*p++;									/*给节点赋值*/
    }
    tail->next=NULL;									/*链表结束*/
    *headp=head;										/*指针指向头*/
}
void judgePalindrome(C_NODE *head){
    struct c_node *x=head,*y=head,*z=head;		/*将头地址存到三个指针中*/
    int i,j,len=0,flag=1;
    while(head!=NULL){
        head=head->next;
        len++;											/*计算链表长度*/
    }
    int a=len;											/*长度存到a中*/
	for(j=1;j<=(a/2);j++)
	{
		for(i=0;i<len-1;i++)
		{
            x=x->next;						/*x指向未判断的最后一个指针*/
		}
if(y->data==x->data)		/*判断未判断的第一个指针和最后
{		一个指针指向的字符是否相等*/
            y=y->next;						/*指向下一个未判断的指针*/
            len--;							/*判断完的链表移出*/
		}
		else
		{
			flag=0;							/*不相等，退出循环*/
			goto down;
		}
		x=z;								/*x指向头*/
	}
	down:
	if(flag==1)
	{
        printf("true");
	}
	else
	{
		printf("false");
	}
} 
