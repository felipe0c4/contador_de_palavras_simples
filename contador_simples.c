#include <stdio.h>
#include <ctype.h>

int countWords(const char *str) {
    int state = 0;
    int wordCount = 0;

    while (*str) {
        if (isspace(*str)) {
            state = 0;
        } else if (state == 0) {
            state = 1;
            ++wordCount;
        }
        ++str;
    }
    return wordCount;
}



int main() {
    char input[256];
    printf("Digite uma frase: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = 0;

    int numWords = countWords(input);

    printf("Número de palavras: %d\n", numWords);

}
