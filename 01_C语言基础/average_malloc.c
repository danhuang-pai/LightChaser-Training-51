#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main(){
    int n=0;
    printf("请输入数字个数,至少为1：");
    if(scanf("%d",&n)!=1)   //输入为非数字时，程序会提示出现错误。
    {
        printf("输入错误，数字个数要为一个整数。\n");
        return 1;
    }
    int *p=(int *)malloc(n*sizeof(int));
    if(p==NULL)   //查看malloc是否分配空间成功。
    {
        printf("%s\n",strerror(errno));
        return 1;
    }
    printf("请输入%d个数字：",n);
    int i=0;
    double sum=0.0;  //定义sum类型为double，避免求平均值的时候精度丢失。
    for(i=0;i<n;i++)
    {
        if(scanf("%d",p+i)!=1)  //输入为非数字时，程序会提示出现错误。
        {
            printf("输入错误，输入的数字要为整数。\n");
            free(p);
            p=NULL;
            return 1;
        }
        sum+=p[i];
    }
    printf("这%d个数的平均值为：%.2f\n",n,sum/n);
    free(p);  //释放动态分配的空间。
    p=NULL;
    return 0;
}