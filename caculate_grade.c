//评委打分，去除最高分最低分，取平均分//
//思路：先定义并初始化一个数组，for循环遍历存放评委打分（这里需要用do while判断分数为1-10的阿拉伯数字，然后for循环遍历找出最高分和最低分，最后计算平均分//
#include <stdio.h>
int main() {
    int score[10] = {0};//定义并初始化一个待定数组//
    int max = 0, min = 1, sum = 0;//定义并初始化最高分最低分和总分//
    double avg = 0.0;//定义并初始化平均分//
    //评委打分//
    for (int i = 0;i <10; i++) {
    //for循环遍历存放评委打分（这里需要用do while判断分数为1-10的阿拉伯数字，第一段：普通判断//
    int a = i + 1;
        printf("请第%d位评委打分\n", a);
        scanf("%d", &score[i]);
        while(score[i] < 1 || score[i] > 10) {
            getchar();//清除缓冲区的回车//
            printf("输入错误，请输入1-10的阿拉伯数字\n");
            scanf("%d", &score[i]);
        }
        }
    //希望改进为可以报错的形式//
    // for (int i = 0;i <10; i++){
    //     int a = i + 1;
    //     printf("请第%d位评委打分",a);
    //     scanf("%d",&score[i]);
    //     if(score[i] < 1 || score[i] > 10){
    //         printf("输入错误，请输入1-10的阿拉伯数字\n");
    //         i--;
    // }
    //找出最高分和最低分//
    for (int i = 0;i < 10; i++) {
        if (score[i] > max) {
            max = score[i];
        }
        if (score[i] < min) {
            min = score[i];
        }
        sum += score[i];//计算总分//
    }
    sum = sum - max - min;//去除最高分和最低分//
    avg = sum / 8.0;//计算平均分//
    printf("去除最高分%d和最低分%d后的平均分是%.3f\n",max,min,avg);
    return 0;
}