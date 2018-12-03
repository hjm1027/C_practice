#include <stdio.h>
int main(void)
{
    int a,n;
    printf("请输入你想执行的次数：");
    scanf("%d",&n);
    do {
    printf("请输入一个整数：");
    scanf("%d",&a);
    if (a>0)
	puts("该整数为正数。");
    else if (a<0)
	puts("该整数为负数。");
    else
	puts("该整数为0。");
    n-=n;
    }while(n>0);
    return 0;
}
