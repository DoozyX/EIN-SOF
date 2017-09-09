#include <stdio.h>
#include <string.h>

/*
 * 3.      Палиндроми се низи од букви што се читаат исто и оддесно на лево и одлево на десно.
 * На пример зборот “radar” е палиндром. Да се напише програм во кој внесуваме низа од карактери.
 * Треба да имаме функција palindrom која враќа вредност 1 ако стрингот е палиндром или 0 инаку.
 */

int palindrom(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len/2 ; ++i) {
        if (word[i] != word[len-i-1]) {
            return  0;
        }
    }
    return 1;
}

int main() {
    printf("%d\n", palindrom("radar"));
    return 0;
}