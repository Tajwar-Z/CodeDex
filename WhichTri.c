#include<stdio.h>

int main(){
    int a, b, c;
    int A, B, C;

    scanf("%d%d%d", &a, &b, &c);

    A = a * a;
    B = b * b;
    C = c * c;
    
    if(a >= b + c || b >= a + c || c >= a + b){
        printf("Invalido\n");
    }
    else { 
        if (a == b && b == c) {
            printf("Valido-Equilatero\n");
        }
        else if(a == b || b == c || c == a) {
            printf("Valido-Isoceles\n");
        }
        else {
            printf("Valido-Escaleno\n");
        }

        if(A == B + C || B == A + C || C == B + A ){
        printf("Retangulo: S\n");
    }
    else{
        printf("Retangulo: N\n");
    }

    }
    return 0;
}