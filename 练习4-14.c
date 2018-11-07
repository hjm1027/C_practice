#include <stdio.h>
int main(void)
{
    int a;
    printf("请输入一个整数：");
    scanf("%d",&a);
    int b=a/10;
    int c=a%10;
    int i=1;
    for (;i<=b;i++){
    printf("1234567890");
    }
    for(i=1;i<=c;i++){
    printf("%d",i);
    }
    puts("");
    return 0;
}
