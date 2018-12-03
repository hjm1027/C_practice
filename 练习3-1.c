#include <stdio.h>
int main(void)
{
    puts("请输入两个整数。");
    int a,b;
    printf("整数A:"); scanf("%d",&a);
    printf("整数B:"); scanf("%d",&b);
    if (a%b)
        puts("B不是A的约数");
    else
	puts("B是A的约数");
    return 0;
}
