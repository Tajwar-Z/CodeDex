#include<stdio.h>
#include<string.h>

int isVowel(char ch);

int main(){
    char str[100], replacementChar;
    int i;

    fgets(str, sizeof(str), stdin);
    

}

int isVowel(char ch){
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || );
}