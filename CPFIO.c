#include<stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d.%d.%d-%d",&a,&b,&c,&d);
    printf("%.3d\n",a);
    printf("%.3d\n",b);
    printf("%.3d\n",c);
    printf("%.2d\n",d);
    return 0;
}