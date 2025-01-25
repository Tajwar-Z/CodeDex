#include<stdio.h>
int main(){
    int X, i = 1;
    scanf("%d",&X);
    
    while( i <= X ){
          printf("%d\n",i);
          i = i + 2;
    }
    return 0;
}