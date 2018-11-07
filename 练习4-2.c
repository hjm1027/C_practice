#include <stdio.h>
int main(void)
{
    int a,b,c;
    puts("请输入两个整数。");
    printf("整数a："); scanf("%d",&a);
    printf("整数b："); scanf("%d",&b);
    if (a<b){
    c=a;a=b;b=c;  /*a永远不小于b*/
    }
    int n=0;
    int B=b;
    do{
    n=n+b;b++;
    }while(b<=a);
    printf("大于等于%d小于等于%d的数的和为%d。\n",B,a,n);
    return 0;
}
