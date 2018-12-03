#include <stdio.h>
int main(void)
{
    int x,y,i;
    puts("生成一个正方形");
    printf("正方形有几层：");
    scanf("%d",&i);
    for (y=1;y<=i;y++){
    	for (x=1;x<=i;x++){
	    printf("*");    
	}
	puts("");
    }
    return 0;
}
