#include<stdio.h>
int main(){
    char L;
    scanf("%c",&L);
    int number = L - 'A' + 1;
    printf("%d\n", number);
    return 0;
}