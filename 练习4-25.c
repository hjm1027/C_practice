#include <stdio.h>
int main(void)
{
    int x,y,n,a;
    printf("让我们来画一个向下的金字塔。");
    printf("金字塔有几层："); scanf("%d",&n);
    for (y=1;y<=n;y++){
	for (a=1;a<=y-1;a++)
	    printf(" ");
        for (x=1;x<=2*(n-y)+1;x++){
	    printf("%d",y%10);
	}
        puts("");
    }
    return 0;
}
