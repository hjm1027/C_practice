#include <stdio.h>
#include <unistd.h>
void alert (int n)
{   int i;
    for (i=0;i<n;i++){
         printf("\a\a\a");
    }
}
int main(void)
{
    int n;
    printf("请输入响铃次数：");scanf("%d",&n);
    alert (n);
    return 0;
}
