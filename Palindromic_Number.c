#include<stdio.h>
int main(){
    int a, b, c, s = 0;
    scanf("%d",&a);
    c = a;
    while(a != 0){
        b = a % 10;
        a = a / 10;
    
        s = s * 10;
        s = s + b;
       }
       if(c == s){
        printf("Yes\n");
       }
       else{
        printf("No\n");
       }

        return 0;
}