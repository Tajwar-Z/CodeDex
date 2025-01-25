#include<stdio.h>

int main() {
    int N, i;
    int fib[46];


    scanf("%d", &N);

    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i < N; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(i = 0; i<N ; i++){
        if(i == N-1){
            printf("%d",fib[i]);
        }
        else{
            printf("%d ",fib[i]);
        }
    }
    printf("\n");
    return 0;
}