#include <stdio.h>
int main(void)
{
    int x,y;
    printf("请输入两个整数：\n");
    printf("整数a:"); scanf("%d",&x);
    printf("整数b:"); scanf("%d",&y);
    printf("x的值是y的%d%%。\n",x*100/y);
    return 0;
}
