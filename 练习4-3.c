#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个正整数：");
    scanf("%d",&no); int n=no;
    while (no>=0) {
    printf("%d ",no);
    no--;
    }
    if (n>0)
	puts("");
    return 0;
}
