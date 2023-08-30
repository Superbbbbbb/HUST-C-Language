#include <stdio.h>
#include <stdlib.h>
struct student
    {
        char name[10];
        int score;
    };

int main()
{
    struct student s[10];
    int i,j,n,x,y;  
    while(1)
    {
        scanf("%d",&x);
        switch(x)											/*switch菜单*/
        {
            case 1:
            {
                scanf("%d",&n);
                for(i=0;i<n;i++)
                scanf("%s%d",s[i].name,&s[i].score);
                break;
            }
            case 2:
            {
                struct student temp;
                for(i=0;i<n;i++)
    	        {
        	        for(j=0;j<n-i-1;j++)
                    {   			 
                        if(s[j].score<s[j+1].score)			/*比较成绩*/
            	        {
                	        temp=s[j];
                	        s[j]=s[j+1];
                	        s[j+1]=temp;						/*交换*/
            	        }
        	        }
    	        }
                for(i=0;i<n;i++)
    	        {
        	        for(j=0;j<n-i-1;j++)
                    {
                        int p=0;
                        if(s[j].score==s[j+1].score)
                        {
                            while(s[j].name[p]!='\0')
                            {
                            if(s[j].name[p]>s[j+1].name[p])/*比较字母顺序*/
                                {
                                    temp=s[j];
                                    s[j]=s[j+1];
                                    s[j+1]=temp;				/*交换*/
                                    goto a;
                                }
                                else if(s[j].name[p]<s[j+1].name[p])
                                    goto a;
                                p++;					/*字母往后移一位*/
                            }
                        }
                    }
    	        }
                a:
                break;
            }
            case 3:
            {
                for(i=0;i<n;i++)
                    printf("%s %d\n",s[i].name,s[i].score);		/*输出*/
            }
            case 0:goto down;
        }
    }
    down:
    return 0;
}
