#include <stdio.h>
int main(){
    int n=1; //初始化n为1，使得循环从1开始
    int sum=0;
    for(n=1;n<=100;n++){
        if(n%2!=0){
            sum+=n;
        }
    }
    printf("1到100之间所有奇数的和为：%d\n",sum);
    return 0;
}