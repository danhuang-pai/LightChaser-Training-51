#include <stdio.h>
int main(){
    double a,b;
    char op;
    printf("这是一个简易计算器\n");
    printf("请输入一个算式：");
    if(scanf("%lf%c%lf",&a,&op,&b)!=3){
        printf("输入错误，请输入正确的算式。\n");
        return 1;
    }else if(op=='+'){
        printf("%.2f+%.2f=%.2f\n",a,b,a+b);
    }else if(op=='-'){
        printf("%.2f-%.2f=%.2f\n",a,b,a-b);
    }else if(op=='*'){
        printf("%.2f*%.2f=%.2f\n",a,b,a*b);
    }else if(op=='/'){
        while(1){
            if(b==0){
            printf("除数不能为0，请重新输入正确的除法算式：");
            scanf("%lf%c%lf",&a,&op,&b);
            }else{
            printf("%.2f/%.2f=%.2f\n",a,b,a/b);
            break;
            }
        }
    }
    return 0;
}