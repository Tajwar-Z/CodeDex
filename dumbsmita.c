#include <stdio.h>

int main() {
    int i, j;
    int c;
    int n = '@';
    c = n * 2;
    for (i = 0; i < 2 * n - 1; i++) {
        for (j = 0; j < 2 * n - 1; j++) {
            if (j == i || j == 2 * n - 2 - i)
                printf("%d", j + 1);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}