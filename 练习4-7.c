#include <stdio.h>
int main(void)
{
    int a,i;
    printf("请输入一个整数：");
    scanf("%d",&a);
    i=2;
    while (i<a){
        printf("%d ",i);
	i=i*2;
    }
    if (a>2)
	puts("");
    return 0;
}
