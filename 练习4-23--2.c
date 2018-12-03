#include <stdio.h>
int main(void)
{
    int i,j,len;
    puts("生成直角在右上方的等腰直角三角形。");
    printf("短边：");
    scanf("%d",&len);
    for (j=1;j<=len;j++){
        for (i=j-1;i>0;i--){
            printf(" ");
        }
        for (i=len-j;i>=0;i--){
	    printf("*");
	}puts("");
    }
    return 0;
}

