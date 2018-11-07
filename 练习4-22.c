#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    puts("让我们来画一个正方形");
    printf("一边："); scanf("%d",&a);
    printf("另一边："); scanf("%d",&b);
    if (a>b){c=a;d=b;}
    else {c=b;d=a;}     /*c更大*/
    for (a=1;a<=d;a++){
        for (b=1;b<=c;b++){
	    printf("*");
	}puts("");
    }
    return 0;
}
