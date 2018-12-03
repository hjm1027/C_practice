#include <stdio.h>
int main(void)
{
    int n;
    printf("n的值：");
    scanf("%d",&n);
    int i=1;
    int a=0;
    for (;i<=n;i++){
    a+=i;
    }
    printf("1到%d的和为%d。\n",n,a);
    return 0;
}
