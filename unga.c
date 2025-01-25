#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    // Check if the character is a vowel (both lowercase and uppercase)
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() {
    char str[100], replacementChar;
    int i;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Manually remove the newline character added by fgets, if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Input the character to replace vowels with
    printf("Enter the character to replace vowels with: ");
    scanf("%c", &replacementChar);

    // Loop through the string and replace vowels
    for (i = 0; i < strlen(str); i++) {
        if (isVowel(str[i])) {
            str[i] = replacementChar; // Replace vowel with the given character
        }
    }

    // Output the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
