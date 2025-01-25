#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d/%d/%d",&a,&b,&c);
    printf("%.2d/%.2d/%.2d\n",b,a,c);
    printf("%.2d/%.2d/%.2d\n",c,b,a);
    printf("%.2d-%.2d-%.2d\n",a,b,c);
    return 0;
}