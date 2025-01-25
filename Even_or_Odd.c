#include<stdio.h>

int main(){
int min, max, x, y;
int sum = 0;
scanf("%d %d", &x, &y);
if( x > y){
    min = y;
    max = x;
}
else{
    min = x;
    max = y;
}
for( int i = (min + 1); i < max; ++i){
 if(i%2 != 0){
    sum =sum + i;
 }
}
 printf("%d\n",sum);
 return 0;
}
