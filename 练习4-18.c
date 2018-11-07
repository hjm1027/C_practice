#include <stdio.h>
int main(void)
{
    int a,b,c,i;
    printf("显示多少个*：");
    scanf("%d",&a);
    for(b=a/5,i=1;i<=b;i++){
    puts("*****");
    }
    for(c=a%5,i=1;i<=c;i++){
    printf("*");
    }
    if (a%5!=0){
    puts("");}
    return 0;
}
