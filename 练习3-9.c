#include <stdio.h>
int main(void)
{
    int n1,n2,n3,n;
    puts("请输入3个整数。");
    printf("整数1："); scanf("%d",&n1);
    printf("整数2："); scanf("%d",&n2);
    printf("整数3："); scanf("%d",&n3);
    n=(n1>n2) ? n2 : n1;
    n=(n>n3) ? n3 : n;
    printf("最小值是%d。\n",n);
    return 0;
}
