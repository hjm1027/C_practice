#include <stdio.h>
int a=0;
int sumup(int n)
{
    while (n>0)
        return a=n+sumup(n-1);
}
int main(void)
{
    int n;
    printf("请输入一个整数："); scanf("%d",&n);
    printf("1到n之间所有整数的和为%d\n",sumup(n));
    return 0;
}
