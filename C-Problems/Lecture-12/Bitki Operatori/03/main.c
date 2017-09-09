#include <stdio.h>

/*
 * 3. Да се открие и опише што работи следниот програм?
*/

/* Program vezba11_01.c
   Shto raboti sledniot program?*/


int misterija(unsigned bitovi);

int main() {
    unsigned x;
    printf("Vnesi cel broj: ");
    scanf("%u", &x);
    printf("Rezultatot e %d\n", misterija(x));
    return 0;
}

int misterija(unsigned bitovi) {
    //brojac da pomine niz site bitovi
    unsigned i;
    //ja postavuva maskata taka da prviot bit e 1
    unsigned maska = 1 << 31;
    //brojac kolku bitovi so vrednost ima vo brojot
    unsigned total = 0;

    //loop da pomine niz bitovite i posle sekoj ciklus go siftira brojot za 1 bit na desno
    for (i = 1; i <= 32; i++, bitovi <<= 1) {
        //proveruva dali prviot bit e 1 ----- ( bitovi & maska ) dobiva vrednost na maskata dokolku prviot bit e 1
        if ((bitovi & maska) == maska) {
            //ako prviot bit e 1 togas zgolemi go brojacot kolku bitovi so vrednost 1 ima
            total++;
        }

    }
    //vraka dali brojot na bitovi so vrednost 1 e paren ili ne (neparen - 0, paren -1);
    return !(total % 2) ? 1 : 0;
}