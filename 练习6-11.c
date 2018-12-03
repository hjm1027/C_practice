#include <stdio.h>
int search_idx(const int v[],int idx[],int key,int n)
{
    int i;
    int a=0;
    for (i=0;i<n;i++){
        if (v[i]==key){
	    idx[a++]=i;
	}
    }
    return a;
}
int main(void)
{
    int n,i,key;
    printf("请输入数组元素个数：");scanf("%d",&n);
    int v[n];
    int a[n];
    for (i=0;i<n;i++){
        printf("v[%d]=",i+1);scanf("%d",&v[i]);
    }
    printf("请输入想要查找的数：");scanf("%d",&key);
    printf("共有%d个结果\n",search_idx(v,a,key,n));
    return 0;
}
