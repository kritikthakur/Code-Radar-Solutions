#include <stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b){
        printf("First");
    }
    else if (a<b){
        printf("Second");
    }
    else{
        printf("Equal");
    }
}