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
    int av;
    struct stu *next;
};
void output(struct stu **headp);
void correct(struct stu **headp);
void average(struct stu **headp);
void sum(struct stu **headp);
void sort(struct stu *head);
int main()
{
    struct stu *head=NULL;
    int x;
    head=(struct stu *)malloc(sizeof(struct stu));
    struct stu *p=head,*tail=head;
    while(1)
    {
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            {
                int n,i;
                scanf("%d",&n);
for(i=0;i<n;i++)   
{                   
scanf("%s%s%d%d%d%d",p->num,p->name,&p->a,&p->b,&p->c,&p->d);
                    p=(struct stu *)malloc(sizeof(struct stu));
                    tail->next=p;
                    tail=p;
                }
                p=head;
                while(p->next!=NULL)
                {
                    p->av=p->a+p->b+p->c+p->d;
                    p=p->next;
                }
                tail->next=NULL;
                break;
            }
            case 2:sort(head);output(&head);break;
            case 3:correct(&head);break;
            case 4:sort(head);average(&head);break;
            case 5:sort(head);sum(&head);goto down;
        }
    }
    down:
    return 0;
}
void output(struct stu **headp){
    struct stu *p=*headp;
    while(p->next!=NULL)
    {
        printf("%s %s %d %d %d %d\n",p->num,p->name,p->a,p->b,p->c,p->d);
        p=p->next;
    }
}
void correct(struct stu **headp){
    struct stu *p=*headp;
    char num0[11];
    int x,score;
    scanf("%s",num0);
    scanf("%d%d",&x,&score);
    while(p->next!=NULL){
        if(strcmp(num0,p->num)==0)
        {
            switch(x)
            {
                case 1:p->a=score;break;
                case 2:p->b=score;break;
                case 3:p->c=score;break;
                case 4:p->d=score;break;
            }
        }
        p=p->next;
    }
    p=*headp;
    while(p->next!=NULL)
    {
        p->av=p->a+p->b+p->c+p->d;
        p=p->next;
    }
}
void average(struct stu **headp){
    struct stu *p=*headp;
    for(;p->next!=NULL;p=p->next)
    {
        printf("%s %s %.2f\n",p->num,p->name,(double)p->av/4);
    }
}
void sum(struct stu **headp){
    struct stu *p=*headp;
    while(p->next!=NULL){        
printf("%s %s %d %.2f\n",p->num,p->name,p->a+p->b+p->c+p->d,(double)(p->a+p->b+p->c+p->d)/4);
        p=p->next;
    }
}
void sort(struct stu *head){
    struct stu *p=head,*p0;
    char c[11];
    char d[10];
    int l,q,r,s,t,len=0,i,j;
    while(p->next!=NULL){
        len++;											/*计算链表长度*/
        p=p->next;
    }
    for(i=0,p=head;i<len-1;i++,p=p->next)
    {
        for(j=i+1,p0=p->next;j<len;j++,p0=p0->next)
        {
            if(p->av>p0->av)							/*遍历链表，比较*/
            {
                strcpy(c,p->num);strcpy(p->num,p0->num);strcpy(p0->num,c);
strcpy(d,p->name);strcpy(p->name,p0->name);strcpy(p0->name,d);
                l=p->a;p->a=p0->a;p0->a=l;
                q=p->b;p->b=p0->b;p0->b=q;
                r=p->c;p->c=p0->c;p0->c=r;
                s=p->d;p->d=p0->d;p0->d=s;
                t=p->av;p->av=p0->av;p0->av=t;				/*交换数据*/
            }
        }
    }
}
