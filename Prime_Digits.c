#include<stdio.h>
int main(){
    int a, b;
    scanf("%d",&a);
    while(a != 0) {
        b = a % 10;
        a = a / 10;
    
    if(b == 2 || b == 3 || (b % 2 != 0 && b % 3 != 0 )){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    }
    return 0;
}