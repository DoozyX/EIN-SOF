#include <stdio.h>

/*
 * Проект 2:
Да се модифицира програмот за делење карти така да по мешањето подели 5 карти од рака за покер. Да се одреди дали раката содржи:
а) пар.
б) два пара
в) трилинг (пр. три десетки)
г) четири карти од ист број (пр. четири асови)
д) боја (сите пет карти да се од иста боја, на пр, детелина)
ѓ) кента (5 подредени карти од иста боја, пр. 3,4,5,6,7 срце)
 */

/* Program p09_14.c
   Program za delenje karti */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum hand {
    Nothing, Pair, TwoPairs, ThreeOfaKind, FourOfaKind, Flush, StraightFlush
};

/* prototipovi */
void meshaj(int wDeck[][13]);

void deli(int wDeck[][13], const char *wFace[],
          const char *wSuit[], int player1Hand[][2], int player2Hand[][2]);

void rezultat(int playerOneHand[][2], int playerTwoHand[][2]);

enum hand getHand(int playerHand[][2]);

int main() {
    /* inicijaliziraj ja nizata na boi */
    const char *boja[4] = {"Srce", "Karo", "List", "Detelina"};

    /* inicijaliziraj ja nizata na brojki */
    const char *brojka[13] =
            {"As", "Dva", "Tri", "Chetiri",
             "Pet", "Shest", "Sedum", "Osum",
             "Devet", "Deset", "Dzandar", "Dama", "Pop"};

    /* inicijaliziraj niza na spil */
    int spil[4][13] = {0};

    srand(time(0)); /* generator na sluchajni broevi */

    meshaj(spil);
    int player1Hand[5][2], player2Hand[5][2];
    deli(spil, brojka, boja, player1Hand, player2Hand);
    rezultat(player1Hand, player2Hand);
    return 0; /* uspeshen kraj */

} /* kraj main */

/* meshaj gi kartite vo shpilot */
void meshaj(int wDeck[][13]) {
    int row;    /* broj na red */
    int column; /* broj na kolona */
    int card;   /* brojach */

    /* za sekoja od 52-te karti,
    odberi sluchajno mesto vo shpilot */
    for (card = 1; card <= 52; card++) {

        /* biraj nova sluchajna lokacija dodeka ne najdesh
        slobodno mesto */
        do {
            row = rand() % 4;
            column = rand() % 13;
        } while (wDeck[row][column] != 0); /* kraj do...while */

        /* pojtavi ja kartata na izbranoto mesto vo spilot */
        wDeck[row][column] = card;
    } /* kraj for */
} /* kraj na funkcijata meshaj */

/* deli gi kartite vo shpilot */
void deli(int wDeck[][13], const char *wFace[],
          const char *wSuit[], int player1Hand[][2], int player2Hand[][2]) {
    int card;   /* brojach na karti */
    int row;    /* brojach na redovi */
    int column; /* brojach na koloni */

    int i = 0;
    int j = 0;
    /* podeli ja sekoja od 52-te karti */
    for (card = 1; card <= 10; card++) {
        /* pomini niz redovite na wDeck */
        for (row = 0; row <= 3; row++) {
            /* pomini niz kolonite na wDeck za tekovniot red */
            for (column = 0; column <= 12; column++) {
                /* ako mestoto ja sodrzhi tekovnata karta, prikazhi ja kartata */
                if (wDeck[row][column] == card) {
                    if (card % 2 == 0) {
                        player2Hand[i][0] = column;
                        player2Hand[i++][1] = row;
                    } else {
                        //printf("%8s %-8s\n", wFace[column], wSuit[row]);
                        player1Hand[j][0] = column;
                        player1Hand[j++][1] = row;
                    }
                } /* kraj if */
            } /* kraj for */
        } /* kraj for */
    } /* kraj for */
    printf("Player1 Hand:\n");
    for (i = 0; i < 5; ++i) {
        printf("%8s %-8s\n", wFace[player1Hand[i][0]], wSuit[player1Hand[i][1]]);
    }
    printf("\nPlayer2 Hand:\n");
    for (i = 0; i < 5; ++i) {
        printf("%8s %-8s\n", wFace[player2Hand[i][0]], wSuit[player2Hand[i][1]]);
    }
} /* kraj na funkcijata deli */

enum hand getHand(int playerHand[][2]) {
    int flush = 0;
    int ok = 1;
    for (int i = 1; i < 5; ++i) {
        if (playerHand[0][0] != playerHand[0][i]) {
            ok = 0;
        }
    }
    if (ok) {
        flush = 1;
    }

    int minNumber, maxNumber;
    maxNumber = minNumber = playerHand[0][0];
    for (int i = 1; i < 5; i++) {
        if (playerHand[i][0] < minNumber) {
            minNumber = playerHand[i][0];
        }

        if (playerHand[i][0] > maxNumber) {
            maxNumber = playerHand[i][0];
        }
    }

    if (maxNumber - minNumber == 4 && flush) {
        return StraightFlush;
    }

    if (flush) {
        return Flush;
    }

    int differentCard[13] = {0};

    for (int i = 0; i < 5; ++i) {
        ++differentCard[playerHand[i][0]];
    }

    int pairs = 0;

    for (int i = 0; i < 13; ++i) {
        if (differentCard[i] == 4) {
            return FourOfaKind;
        }
        if (differentCard[i] == 3) {
            return ThreeOfaKind;
        }
        if (differentCard[i] == 2) {
            ++pairs;
        }
    }
    if (pairs == 2) {
        return TwoPairs;
    }

    if (pairs) {
        return Pair;
    }

    return Nothing;

}

char *printHand(enum hand hand) {
    switch (hand) {
        case Nothing:
            return "Nothing";
        case Pair:
            return "Pair";
        case TwoPairs:
            return "TwoPairs";
        case ThreeOfaKind:
            return "ThreeOfaKind";
        case FourOfaKind:
            return "FourOfaKind";
        case Flush :
            return "Flush";
        case StraightFlush:
            return "StraightFlush";
    }
}

void rezultat(int playerOneHand[][2], int playerTwoHand[][2]) {
    enum hand player1 = getHand(playerOneHand);
    enum hand player2 = getHand(playerTwoHand);

    printf("\nPlayer 1 got: %s\n", printHand(player1));
    printf("Player 2 got: %s\n\n", printHand(player2));


    if (player1 > player2) {
        printf("Player 1 won with %s\n", printHand(player1));
    } else if (player1 < player2){
        printf("Player 2 won with %s\n", printHand(player2));
    } else {
        printf("Equals\n");
    }
}
