#include <stdio.h>
#define A 20
int main(void)
{   
    int n,i;
    printf("数据个数：");
    scanf("%d",&n);
    int v[A]={0};
    for (i=0;i<n;i++){
        printf("%d号：",i+1);
	scanf("%d",&v[i]);
    }
    printf("{");
    for (i=0;i<n;i++){
	printf(" %d,",v[i]);
    }
    printf("}\n");
    return 0;
}
