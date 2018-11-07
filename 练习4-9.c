#include <stdio.h>
int main(void)
{
    int a;
    printf("正整数：");
    scanf("%d",&a);
    int i=0;
    if (a%2){
        while(i<a-1){
	printf("+-");
	i=i+2;
	}printf("+\n");
    }
    else{
        while(i<a){
	printf("+-");
	i=i+2;
	}puts("");
    }
    return 0;
}
