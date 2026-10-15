#include <stdio.h>
int main(){
    int a=0; //定义变量并进行初始化。
    int b=0;
    int c=0;
    printf("请输入第一个变量a：");
    if(scanf("%d",&a)!=1)   //输入为非数字时，程序会提示出现错误。
    {
        printf("输入错误，请输入一个整数。");
        return 1;
    }
    int *p1=&a; //保存变量a的地址。
    printf ("请输入第二个变量b：");
    if(scanf("%d",&b)!=1)   //输入为非数字时，程序会提示出现错误。
    {
        printf("输入错误，请输入一个整数。\n");
        return 1;
    }
    int *p2=&b;  //保存变量b的地址。
    c=*p1;  //c保存了a原来的值
    *p1=*p2; //将b的值赋给变量a
    *p2=c;   //将c保存的值赋给变量b
    printf("交换后，变量a的值为：%d\n",a);
    printf("交换后，变量b的值为：%d\n",b);
    return 0;
}