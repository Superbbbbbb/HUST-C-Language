#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void f0(int b);									/*声明8个函数*/
void f1(int b);
void f2(int b);
void f3(int b);
void f4(int b);
void f5(int b);
void f6(int b);
void f7(int b);
struct bits{
    int bit;
}s[8];										/*定义结构体数组*/
int main()
{
    int n,i;
    scanf("%d",&n);							/*输入十进制数字*/
void(*p_fun[8])(int b);				/*定义函数指针数组，存入函数名*/
    p_fun[0]=f0;
    p_fun[1]=f1;
    p_fun[2]=f2;
    p_fun[3]=f3;
    p_fun[4]=f4;
    p_fun[5]=f5;
    p_fun[6]=f6;
    p_fun[7]=f7;
    for(i=0;i<8;i++)
    {
        s[i].bit=n%2;				/*转化为二进制数，储存在结构体数组中*/
        n/=2;
if(s[i].bit)					/*当二进制位为1时，调用相应函数*/
            p_fun[i](i);
    }
return 0;
}
void f0(int b){
    printf("the function %d is called!\n",b);
}
void f1(int b){
    printf("the function %d is called!\n",b);
}
void f2(int b){
    printf("the function %d is called!\n",b);
}
void f3(int b){
    printf("the function %d is called!\n",b);
}
void f4(int b){
    printf("the function %d is called!\n",b);
}
void f5(int b){
    printf("the function %d is called!\n",b);
}
void f6(int b){
    printf("the function %d is called!\n",b);
}
void f7(int b){
    printf("the function %d is called!\n",b);
}
