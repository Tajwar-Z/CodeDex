#include<stdio.h>
int main(){
    double a,b,c;
    double A,B,C;
    scanf("%lf%lf%lf",&a,&b,&c);
    A = a*a;
    B = b*b;
    C = c*c;
    if(a >= b+c || b >= a+c || c >= a+b){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(A == B + C || B == A + C || C == B + A ){
        printf("TRIANGULO RETANGULO\n");
    }
    else if(A > B + C || B > A + C || C > A + B){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(A < B + C || B < A + C || C < A + B){
        printf("TRIANGULO ACUTANGULO\n");    
    }
    if(a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        }
    else if(a == b || b == c || c == a){
            printf("TRIANGULO ISOSCELES\n");
        }
    return 0;
}