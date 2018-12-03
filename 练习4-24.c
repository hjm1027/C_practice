#include <stdio.h>
int main(void){
    int n,y,a,b;
    printf("让我们来画一个金字塔。");
    printf("金字塔有几层："); scanf("%d",&n);
    for (y=1;y<=n;y++){
        for(a=n-y;a>0;a--)
	{printf(" ");}
	for(b=1;b<=(y-1)*2+1;b++)
	{printf("*");}
	puts("");
    }
    return 0;
}
