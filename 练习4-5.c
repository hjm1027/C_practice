#include <stdio.h>
int main(void)
{
    int i,no;
    printf("请输入一个正整数：");
    scanf("%d",&no);
    i=0;
    if (no>=0){
    	while(i<no){
 	    printf("%d ",++i);
	}
	puts("");
    }
    return 0;
}
