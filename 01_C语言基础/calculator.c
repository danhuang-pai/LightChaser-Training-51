#include <stdio.h>
int main(){
    int a,b;
    char op;
    printf("这是一个简易计算器\n");
    printf("请输入一个算式：");
    if(scanf("%d%c%d",&a,&op,&b)!=3){  //输入为非数字时，程序会提示出现错误。
        printf("输入错误，请输入正确的算式。\n");
        return 1;
    }else if(op=='+'){  //加法运算
        printf("%d+%d=%d\n",a,b,a+b);
    }else if(op=='-'){  //减法运算
        printf("%d-%d=%d\n",a,b,a-b);
    }else if(op=='*'){  //乘法运算
        printf("%d*%d=%d\n",a,b,a*b);
    }else if(op=='/'){  //除法运算
        while(1){  //设置一个循环，使得除数为0的时候可以重新输入。
            if(b==0){  //判断除数是否为0
            printf("除数不能为0，请重新输入正确的除法算式：");
            scanf("%d%c%d",&a,&op,&b);
            }else{
            printf("%d/%d=%.2f\n",a,b,(double)a/b);
            break; //当输入除数不为0的时候，算出结果即可跳出循环
            }
        }
    }
    return 0;
}