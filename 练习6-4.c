#include <stdio.h>
int pow4(int x)
{
    return x*x;
}
int main(void)
{
    int x;
    printf("请输入一个整数："); scanf("%d",&x);
    printf("该整数的四次幂是%d。\n",pow4(x)*pow4(x));
    return 0;
}
