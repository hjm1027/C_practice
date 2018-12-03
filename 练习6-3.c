#include <stdio.h>
int cube(int x)
{
    x=x*x*x;
    return x;
}
int main(void)
{
    int x;
    printf("请输入一个整数：");
    scanf("%d",&x);
    printf("该整数的立方为%d。\n",cube(x));
    return 0;
}
