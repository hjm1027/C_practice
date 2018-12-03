#include <stdio.h>
int min_of(const int v[],int n)
{
    int i=0;
    int a=v[0];
    for (;i<n;i++){
        if (a>v[i])
	    a=v[i];
    }
    return a;
}
int main(void)
{   int n,i;
    printf("请输入数组元素个数：");scanf("%d",&n);
    int v[n];
    for (i=0;i<n;i++){
        printf("v[%d]=",i+1);scanf("%d",&v[i]);
    }
    printf("数组中最小的值为%d\n",min_of(v,n));
    return 0;
}
