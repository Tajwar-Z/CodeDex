#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a == 5 || a == 6 || a == 12 || a == 13 || a == 19 ||a == 20 ||a == 26 ||a == 27){
        printf("YAPPY!!!\n");
    }
    else{
        printf("Oh no!\n");
    }
    return 0;
}