#include <stdio.h>
int main(void)
{
    int a[6][2];
    int b[6];
    int n;
    int i=1,sum1=0,sum2=0;
    for (n=0;n<6,i<=12;n++,i++){
        printf("请输入第%d名学生的语文和数学成绩：",n+1);
        scanf("%d",&a[0][i]);sum1+=a[0][i];
	i++;
	scanf("%d",&a[0][i]);sum2+=a[0][i];
    }
    printf("语文的总分为：%d。\n",sum1);
    printf("数学的总分为：%d。\n",sum2);
    printf("语文的平均分为：%.2f。\n",(double)sum1/6);
    printf("数学的平均分为：%.2f。\n",(double)sum2/6);
    return 0;
}
