#include <stdio.h>
#include <stdlib.h>
int main()
{
    	int x,y,a,b,c;
    	for(x=100;x<=999;x++)
    	{
        	y=x*x;
        	a=y%10;
        	b=(y-a)%100;
        	c=(y-b-a)%1000;
        	if((a+b+c)==x)
            	printf("%d\n",x);
    	}
    	return 0;
}
