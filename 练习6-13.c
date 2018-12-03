#include <stdio.h>
void mat_add(const int v[2][3][4],int c[4][3])
{
    int i=0;
    for (;i<12;i++){
        c[0][i]=v[1][0][i]+v[2][0][i];
    }
}
void mat_print(const int m[2][3][4],int n)
{
    int i;
    for (i=0;i<12;i++){
        printf("%4d",m[n][0][i]);
    }
    puts("");
}
int main(void)
{
    int tense1[2][3][4]={{{97,67,82},{73,43,46},{97,56,21},{85,46,35}},{{91,63,78},{67,72,46},{89,34,53},{32,54,34}}};
    int sum[4][3];
    mat_add(tense1,sum);
    puts("第一次考试的分数："); mat_print(tense1,1);
    puts("第二次考试的分数："); mat_print(tense1,2);
    puts("总分："); mat_print(sum)
}
