#include <stdio.h>
int main(void)
{
    int a;
    printf("正整数：");
    scanf("%d",&a);
    if (a>=0){
        int n=0;
	while (n++<a){
	puts("*");
	}
    }
    return 0;
}
