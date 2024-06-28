// You are using GCC
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int i,j;
    int k = 1;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("  %2d", k);
            k = k + pow(-1, i);
        }
        k += -1 * pow(-1, i);
        k += n;
        printf("\n");
    }
    return 0;
}
