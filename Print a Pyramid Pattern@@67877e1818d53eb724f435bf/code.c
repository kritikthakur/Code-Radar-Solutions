// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i<=1;i=n;i++){
//         for( int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=(2*i-1);k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Take input for number of rows

    for (int i = 1; i <= n; i++) {  // Fix: Correct loop syntax
        for (int j = 1; j <= n - i; j++) {  // Print spaces
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {  // Print stars
            printf("*");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}