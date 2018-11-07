#include <stdio.h>
int main(void)
{
    int a;
    printf("请输入一个正整数：");
    scanf("%d",&a);
    int n=0;
    int b=a;
    if (a>0){
    do{
    	n++;
	a/=10;
    }while(a>0);
    printf("%d的位数是%d\n",b,n); 
    }
    return 0;
}
