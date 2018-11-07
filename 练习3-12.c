#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个整数：");
    scanf("%d",&no);
    switch (no%5){
	    case 0:puts("该整数能被5整除。"); break;
	    case 1:
	    case 2:
	    case 3:
            case 4:puts("该整数不能被5整除。"); break;
    }
    return 0;
}
