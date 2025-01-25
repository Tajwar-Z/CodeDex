#include <stdio.h>
int main(){
    double N;
    scanf("%lf", &N);
    if (N == (int)N) {
        printf("Integer\n");
    } else {
        printf("Float\n");
    }
    return 0;
}