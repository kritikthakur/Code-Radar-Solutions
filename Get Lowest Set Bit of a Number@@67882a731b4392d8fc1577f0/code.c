#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n = n & -n;
    printf("%d",n);
    return 0;
}