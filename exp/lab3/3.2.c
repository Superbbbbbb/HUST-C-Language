#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu{
    char num[11];
    char name[10];
    int a;
    int b;
    int c;
    int d;
    struct stu *next;
};
void output(struct stu **headp);
void correct(struct stu **headp);
void average(struct stu **headp);
void sum(struct stu **headp);
int main()
{
    struct stu *head=NULL;
    int x;
    head=(struct stu *)malloc(sizeof(struct stu));
    struct stu *p=head,*tail=head;
    while(1){
        scanf("%d", &x);
        switch(x)											/*菜单选择*/
        {
            case 1:
            {
                int n,i;
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
scanf("%s%s%d%d%d%d",p->num, p->name ,&p->a, &p->b, &p->c, &p->d);
                    p=(struct stu *)malloc(sizeof(struct stu));/*分配内存*/
                    tail->next=p;
                    tail=p;						/*指向下一个结点形成链表*/
                }
                tail->next=NULL;				/*结束链表*/
                break;
            }
            case 2:output(&head);break;
            case 3:correct(&head);break;
            case 4:average(&head);break;
            case 5:sum(&head);goto down;
        }
    }
    down:
    return 0;
}
void output(struct stu **headp){
    struct stu *p=*headp;
    while(p->next!=NULL){
        printf("%s %s %d %d %d %d\n",p->num,p->name,p->a,p->b,p->c,p->d);
        p=p->next;								/*指针指向下一个结点*/
    }
}
void correct(struct stu **headp){
    struct stu *p=*headp;
    char num0[11];
    int x,score;
    scanf("%s",num0);
    scanf("%d%d",&x,&score);
    while(p->next!=NULL){
        if(strcmp(num0,p->num)==0)						   /*判断学号相等*/
        {
            switch(x)									   /*菜单选择科目*/
            {
                case 1:p->a=score;break;				   /*改正分数*/
                case 2:p->b=score;break;
                case 3:p->c=score;break;
                case 4:p->d=score;break;
            }
        }
        p=p->next;									/*指针指向下一个结点*/
    }
    p=*headp;										/*指针指向头地址*/
}
void average(struct stu **headp){
    struct stu *p=*headp;
    for(;p->next!=NULL;p=p->next)
    {
        int av=p->a+p->b+p->c+p->d;							/*计算总分*/
        printf("%s %s %.2f\n",p->num,p->name,(double)av/4);
    }
}
void sum(struct stu **headp){
    struct stu *p=*headp;
while(p->next!=NULL){      
printf("%s %s %d %.2f\n",p->num,p->name,p->a+p->b+p->c+p->d,(double)(p->a+p->b+p->c+p->d)/4);
        p=p->next; 									/*指针指向下一个结点*/
    }
}
