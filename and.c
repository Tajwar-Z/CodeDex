#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d ", &a, &b);
    int i= 0;
    while ( i <= b){
        if (a%2 == 0){
            printf("%d", ++i);
        }
    else {
        printf("%d", i);
    }
    i = i + 2;
    }
}