#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    if (n<2){
        printf("Not Prime");
    }
    else{
        for (i=2;i<n;i++){
            if(n%i==0){
                printf("Not Prime");
                break;
            }
        }
    }
    return 0;
}
