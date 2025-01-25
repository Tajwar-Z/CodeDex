#include<stdio.h>

float convertTemp(float celsius);

int main(){
    float n;
    scanf("%f",&n);
    printf("%f",convertTemp(n));
    return 0;
}

float convertTemp(float n){
    float far = n * (9.0/5.0) + 32;
    return far;
}