#include <stdio.h>
int main(void)
{
    int i, no;
    printf("请输入一个正整数：");
    scanf("%d",&no);
    i=0;
    while((2*i+1)<=no){
        printf("%d ",2*i+1);
        i++;
    }
    if (no>=1){
    puts("");
    }
    return 0;
}       
