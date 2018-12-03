#include <stdio.h>
int min2(int a,int b)
{
    int c;
    c=(a<b)?a:b;
    return c;
}
int main(void)
{
    int a,b;
    printf("请输入2个整数：\n");
    printf("整数1：");scanf("%d",&a);
    printf("整数2：");scanf("%d",&b);
    printf("较小的数为%d。\n",min2(a,b));
    return 0;
}
