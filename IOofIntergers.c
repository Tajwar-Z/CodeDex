#include<stdio.h>
int main(){
//this is from me
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    printf("A = %d, B = %d, C = %d\n",a,b,c); 
    if(-10000 <= a && a <= 0){
    printf("A =      %d, B =          %d, C =          %d\n",a,b,c);}
    else if(0 < a && a <= 10000){
    printf("A =       %d, B =         %d, C =        %d\n",a,b,c);}   
    if(-10000 <= a && a <= 0){
    printf("A = %.9d, B = %.10d, C = %.10d\n",a,b,c);}
    else if(0 < a && a <= 10000){
    printf("A = %.10d, B = %.10d, C = %.10d\n",a,b,c);}
    if(-10000 <= a && a <= 0){
    printf("A = %d     , B = %d         , C = %d\n",a,b,c);}
    else if(0 < a && a <= 10000){
    printf("A = %d      , B = %d        , C = %d\n",a,b,c);}
}

#include<stdio.h>
//this is from GPT
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("A = %d, B = %d, C = %d\n", a, b, c); 
    printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
    printf("A = %010d, B = %010d, C = %010d\n", a, b, c);
    printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);
    return 0;
}

 