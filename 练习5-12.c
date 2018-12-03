#include <stdio.h>
int main(void)
{
    int i,j;
    int tensu[2][4][3]={{{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}}};
    puts("第一次考试的分数：");
    for (i=0;i<12;i++){
        printf(" %d",tensu[0][0][i]);
    }puts("");
    puts("第二次考试的分数：");
    for (i=12;i<24;i++){
        printf(" %d",tensu[0][0][i]);
    }puts("");
    return 0;
}
