#include <stdio.h>
void rev_intary(int v[],int n)
{
    int i=0;
    int x[n];
    for (;i<n/2;i++){
        x[i]=v[i];
        v[i]=v[n-1-i];
        v[n-1-i]=x[i];
    }
}
int main(void)
{
    int a,i;
    printf("请输入数组的元素个数：");scanf("%d",&a);
    int v[a];
    for(i=0;i<a;i++){
        printf("v[%d]=",i+1);scanf("%d",&v[i]);
    }
    printf("数组倒序排列后\n");
    rev_intary(v,a);
    int x[a];
    for (i=0;i<a;i++){
	x[i]=v[i];
        printf("%d ",v[i]);
    }
    puts("");
    return 0;
}

