// Nama             : Fikri Baswara Andanawarih
// NIM              : 24060121140122
// Tgl Pembuatan    : Kamis. 23 Maret 2022
// Nama Program     : SiputNaik.c

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Kamus
    int i = 1;
    double h = 0.00, N;

    // Algoritma
    printf("Ketinggian lubang: ");
    scanf("%lf",&N);
    do {
        if (i % 2 != 0){
            h = h + 0.3;
        }
        else{
            h = h - 0.1;
        }
        i++;
    } while (h < N);
    printf("Dibutuhkan %d hari, siput akan mencapai ketinggian %.2f meter\n",i/2,N);

    return 0;
}
