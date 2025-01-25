#include<stdio.h>
int main(){
    double A, B, C, D, E, F, G, H;
    scanf("%lf",&A);
    D == 15/100;
    E == 12/100;
    F == 10/100;
    G == 7/100;
    H == 4/100;
       if( A >= 0 && A <= 400){
        printf("Novo salario : %lf", A + D*A);
        printf("Reajuste ganho : %lf", A*D);
        printf("Em percentual : 15%");
       }
       else if( A >400 && A <= 800){
        printf("Novo salario : %lf", A + E*A);
        printf("Reajuste ganho : %lf", A*E);
        printf("Em percentual : 12%");
       }
       else if( A >800 && A <= 1200){
        printf("Novo salario : %lf", A + F*A);
        printf("Reajuste ganho : %lf", A*F);
        printf("Em percentual : 10%");
       }
       else if( A >1200 && A <= 2000){
        printf("Novo salario : %lf", A + G*A);
        printf("Reajuste ganho : %lf", A*G);
        printf("Em percentual : 7%");
       }
       else{
        printf("Novo salario : %lf", A + H*A);
        printf("Reajuste ganho : %lf", A*H);
        printf("Em percentual : 4%");
       }
       return 0;
}