#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if (a>1){
        if (a%1==0 && a%a==0){
            printf("Prime");
        }
    }
    else{
        printf("Not Prime");
    }
}