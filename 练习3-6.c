#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    printf("请输入3个整数。\n");
    printf("整数a:"); scanf("%d",&a);    
    printf("整数b:"); scanf("%d",&b);
    printf("整数c:"); scanf("%d",&c);
    if (a<b)
	d=a;
    else 
	d=b;
    if (d>c){
	d=c;}
    printf("最小的整数是：%d\n",d);
    return 0;
}
