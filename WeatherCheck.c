#include<stdio.h>
int main(){
    int temp[7];
    int count = 0 ;
    int i;

    for(i = 0; i < 7 ; i++){
        scanf("%d", &temp[i]);
    
    
    if(temp[i] > 35 ){
        count++;
    } 
    }
    if(count > 3){
        printf("Heatwaves");
    }
    else{
        printf("No heatwaves");
    }

   return 0;
}