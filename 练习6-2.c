#include <stdio.h>
int min2(int a,int b,int c)
{
    int d;
    d=(a<b)?a:b;
    d=(d<c)?d:c;
    return d;
}
int main(void)
{
    int a,b,c;
    printf("请输入3个整数：\n");
    printf("整数1：");scanf("%d",&a);
    printf("整数2：");scanf("%d",&b);
    printf("整数3：");scanf("%d",&c);
    printf("较小的数为%d。\n",min2(a,b,c));
    return 0;
}

