#include<stdio.h>
int main(){
    int N, i, j, maxRate;

    scanf("%d", &N);

    int grid[N][N];
    
    for(i = 0; i < N; i++){
        for (j = 0; j < N; j++) {
        scanf("%d", &grid[i][j]);
    }
    }

    maxRate = grid[0][0];

    for(i = 0;i < N; i++){
        for (j = 0; j < N; j++) {
        if( grid[i][j] > maxRate){
            maxRate = grid[i][j];
        }
        }
    }
    printf("%d",maxRate);
}