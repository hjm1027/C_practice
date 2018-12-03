#include <stdio.h>
int main(void)
{
    int a,b,c;
    double d;
    printf("开始数值（cm）："); scanf("%d",&a);
    printf("结束数值（cm）："); scanf("%d",&b);
    printf("间隔数值（cm）："); scanf("%d",&c);
    for (;a<=b;a+=c){
    d=(a-100)*0.9;
    printf("%3dcm %6.2fkg\n",a,d);
    }
    return 0;
}
