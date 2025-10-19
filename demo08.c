#include <stdio.h>
/*这是我的第一行代码*/
int main() {
    int a = 34;
    int b = 78;
    if (a == b) {
        printf("点击输入文本\n");
    }else{
        printf("黑塔女士举世无双\n");
    }if (a >= b) {
        printf("aHHHHHigher\n");
    }else{
        printf("aLLLLLower\n");
    }
    a = a + b;
    b = a;
    if (a == b) {
        printf("点击输入文本\n");
    }else{
        printf("黑塔女士举世无双\n");
    }if (a > b && a != b) {
        printf("aHHHHHigher\n");
    }else if (a < b && a != b){
        printf("aLLLLLower\n");
    }else{
        printf("a=b\n");
    }
    int temperature = 0;
    int is_useing = 0;
   #define i = 0;
    do {
        printf("请输入当前温度：\n");
        scanf("%d", &temperature);
    } while (temperature < -273 || temperature > 100);
    do {
        printf("您是否用水？1是，0否\n");
        scanf("%d", &is_useing);
    } while (is_useing != 0 && is_useing != 1);   
    if (temperature > 50 || is_useing == 1){
        printf("停止加热\n");
    }else{
        printf("temperature < 50 且未用水,继续加热\n");
    }
    return 0;
}
