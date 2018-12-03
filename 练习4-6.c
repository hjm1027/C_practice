#include <stdio.h>
int main(void)
{
    int i, no;
    printf("请输入一个正整数：");
    scanf("%d",&no);
    i=1;
    while(2*i<no){
        printf("%d ",2*i);
	i++;
    }
    if (no>2){
    puts("");
    }
    return 0;
}
