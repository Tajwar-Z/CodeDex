#include <stdio.h>

int main() {
    int max_value = 0; 
    int position = 0;   
    int num, i;
    
    for (i = 1; i <= 100; i++) {
        scanf("%d", &num);  
        
        if (num > max_value) {
            max_value = num;  
            position = i;     
        }
    }
    
    printf("%d\n", max_value);
    printf("%d\n", position);
    
    return 0;
}
