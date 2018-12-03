#include <stdio.h>
int main(void)
{
    int a[4][3];
    int b[3][4];
    int i=0,j=0;
    for (i=0;i<12;i++){
	    scanf("%d",&a[0][i]);
    }
    for (i=0;i<12;i++){
	    scanf("%d",&b[0][i]);
    }
    int c[12]={0};
    for (i=0;i<12;i++){
        c[i]=a[0][i]*b[0][i];
	printf("数组的乘积为：");
	printf("c[%d]=%d\n",i+1,c[i]);
    }
    return 0;
}
