#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * 3. Да се пронајдат на Интернет кодовите за бројки и букви во Морзеовата азбука.
 * Да се напише програм кој чита текст фраза и ја дава нејзината вредност во Морзеовата азбука.
 * Да се направи и друга функција на која и се предава Морзеов текст,
 * а треба како резултат да се добие текст фраза во говорен јазик.
  */

#define SIZE 37

const char *const morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
                             "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.",
                             "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
                             "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....",
                             "-....", "--...", "---..", "----.", "|"};
const char *const alpha[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
                             "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v",
                             "w", "x", "y", "z", "0", "1", "2", "3", "4", "5", "6", "7", "8",
                             "9", " "};

void toMorse(const char text[]) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            char letter = tolower(text[i]);
            printf("%s ", morse[letter - 'a']);
        } else if (isdigit(text[i])) {
            printf("%s ", morse[text[i] - '0' + 26]);
        } else {
            printf("| ");
        }
    }
}

void toAlpha(char text[]) {
    char *morseLetter = strtok(text, " ");
    while (morseLetter != NULL) {


        for (int i = 0; i < SIZE; ++i) {
            if (!strcmp(morseLetter, morse[i])) {
                printf("%s", alpha[i]);
                break;
            }
        }

        morseLetter = strtok(NULL, " ");
    }
}

int main() {

    char text[100];
    int choice;
    printf("Enter 0 for Alphabet to Morse or\n"
                   "Enter 1 for Morse to Alphabet");
    scanf("%d", &choice);
    gets(text);
    gets(text);
    if (choice) {
        toAlpha(text);
    } else {
        toMorse(text);
    }


}
