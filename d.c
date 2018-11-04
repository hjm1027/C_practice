#include <stdio.h>
int main (void)
{
    int max2 (int a, int b){
    	if (a>b)
	    return a;
	else
	    return b;
    }
    int a,b;
    puts("请输入两个整数：");
    printf("整数1："); scanf("%d",&a);
    printf("整数2："); scanf("%d",&b);
    printf("较大整数的值是：%d\n",max2(a,b));
    return 0;
}
