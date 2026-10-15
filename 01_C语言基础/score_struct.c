#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
typedef struct score_struct
{
    char name[20];
    double score;
}score_struct;
void add_score(score_struct *p)  //使用一个函数来填写成绩单
{
    printf("请输入姓名：");
    scanf("%s",p->name);
    printf("请输入对应的成绩：");
    scanf("%lf",&(p->score));
}
int main(){
    int n=0;
    int i=0;
    printf("请输入要记录的成绩人数：");
    scanf("%d",&n);
    score_struct *arr=(score_struct*) malloc(n*sizeof(score_struct));  //给成绩单赋予动态内存
    if (arr==NULL){  //判断malloc是否成功拿取到内存
        printf("%s\n",strerror(errno));
        return 1;
    }
    score_struct *p=arr; //定义一个新的结构体指针，以便更好遍历函数
    for(i=0;i<n;i++){
        add_score(p);
        p++;
    }
    for(i=0;i<n;i++){  //打印成绩单
        printf("姓名为%s,成绩为%.2f。",arr[i].name,arr[i].score);
        printf("\n");
    }
    free(arr); //释放空间
    arr=NULL;
    return 0;
}