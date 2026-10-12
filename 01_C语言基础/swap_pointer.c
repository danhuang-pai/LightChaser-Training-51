#include <stdio>
int main(){
    int a=0;
    int b=0;
    int c=o;
    printf("请输入第一个变量a：\n");
    scanf("%d",&a);
    int *p1=&a;
    printf ("请输入第二个变量b：\n");
    scanf("%d",&b)
    int *p2=&b;
    c=*p1;
    *p1=*p2;
    *p2=c;
    printf("交换后，变量a的值为：%d\n",a);
    printf("交换后，变量b的值为：%d\n",b);
    return 0;
}