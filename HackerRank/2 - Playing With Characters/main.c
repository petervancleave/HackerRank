

#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sen[100];

    // Read a single character
    scanf("%c", &ch);

    // Read a string 
    scanf("%s", s);

    // Consume the leftover newline before reading the sentence
    scanf("\n");

    // Read a full sentence 
    scanf("%[^\n]%*c", sen);

    // Output
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}

