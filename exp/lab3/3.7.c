void sort(struct stu **headp){
	struct stu *p1,*p2,*pr1,*pr2;
	struct stu *temp;
    for(p2=*headp;p2;p2=p2->next)
	{
		p2->av=p2->c1+p2->c2+p2->c3+p2->c4;					/*计算总分*/
	}
	p1=(struct stu*)malloc(sizeof(struct stu));
	p1->next=*headp;
	(*headp)=pr1=p1;
	for(p1=pr1->next;p1->next;pr1=p1,p1=p1->next)
	{
		for(p2=p1->next,pr2=p1;p2;pr2=p2,p2=p2->next)
{
			if(p1->av>p2->av)							/*判断分数高低*/
			{
				temp=p2->next;							/*交换节点*/
				pr1->next=p2;
				pr2->next=p1;
				p2->next=p1->next;
				p1->next=temp;
				temp=p1;p1=p2;p2=temp;
			}
			p1=(*headp);
			(*headp)=p1->next;
			free(p1);									/*释放内存*/
		}
}
}
