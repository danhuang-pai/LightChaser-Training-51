#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main(){
    int n=0;
    printf("请输入数字个数,至少为1：");
    if(scanf("%d",&n)!=1)
    {
        printf("输入错误，数字个数要为一个整数。\n");
        return 1;
    }
    int *p=(int *)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("%s\n",strerror(errno));
        return 1;
    }
    printf("请输入%d个数字：",n);
    int i=0;
    double sum=0.0;
    for(i=0;i<n;i++)
    {
        if(scanf("%d",p+i)!=1)
        {
            printf("输入错误，输入的数字要为整数。\n");
            free(p);
            p=NULL;
            return 1;
        }
        sum+=p[i];
    }
    printf("平均值为：%.2f\n",sum/n);
    free(p);
    p=NULL;
    return 0;
}