#include<stdio.h>
int main()
{
    int num,n,bit;
    scanf("%d %d",&num,&n);
    num=num^(n>>1);
    printf("%d",num);
    return 0;
}