#include <stdio.h>

int main() {
    int X, Y, i, sum = 0;

    scanf("%d %d", &X, &Y);
    int min = (X < Y) ? X : Y;
    int max = (X > Y) ? X : Y;
    
    for (i = min; i <= max; i++) {
      
        if (i % 13 != 0) {
            sum += i; 
        }
    }
    printf("%d\n", sum);

    return 0;
}