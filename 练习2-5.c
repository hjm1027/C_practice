#include <stdio.h>
int main(void)
{
    int a,b;
    printf("请输入两个整数。\n");
    printf("整数a："); scanf("%d",&a);
    printf("整数b："); scanf("%d",&b);
    printf("a是b的%f%%\n",(double)a*100/b);
    return 0;
}
