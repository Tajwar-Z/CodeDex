#include<stdio.h>
int main(){
    long long int a, b, x;
    scanf("%lld %lld",&a,&b);
    long long int sumB = (b*(b + 1))/2;
    long long int sumA = (a*(a - 1))/2;
    x = sumB - sumA;
    printf("%lld\n",x);
    return 0;

    
}