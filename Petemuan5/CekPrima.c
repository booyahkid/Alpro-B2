// Nama             : Fikri Baswara Andanawarih
// NIM              : 24060121140122
// Tgl Pembuatan    : Kamis. 23 Maret 2022
// Nama Program     : CekPrima.c
// Deskripsi        : menampilkan faktor dari angka inputan N

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // Kamus
    int N,i,checker;

    // Algoritma
    checker = 0;
    printf("Ingin mencari faktor dari bilangan berapa?");
    scanf("%d",&N);
    for(i=2; i<=(sqrt(N));i++){
        if (N % i == 0){
            checker = 1;
            break;
        }
    }
    if(checker == 1){
        printf("Bukan bilangan prima");
    }
    else{
        printf("Bilangan prima");
    }
    return 0;
}

// Nama             : Fikri Baswara Andanawarih
// NIM              : 24060121140122
// Tgl Pembuatan    : Kamis. 23 Maret 2022
// Nama Program     : CekSempurna.c
// Deskripsi        : menampilkan faktor dari angka inputan N

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // Kamus
    int N,i,sempurna;
    sempurna = 0;
    printf("Masukkan bilangan yang menurutmu Sempurna? ");
    scanf("%d",&N);

    for(i=1; i<N ;i++){
        if (N % i == 0){
            sempurna = sempurna + i;
        }
    }
    if (N == sempurna){
        printf("Bilangan Sempurna");
    }
    else{
        printf("Bukan bilangan Sempurna");
    }
    return 0;
}

// Nama             : Fikri Baswara Andanawarih
// NIM              : 24060121140122
// Tgl Pembuatan    : Kamis. 23 Maret 2022
// Nama Program     : SiputNaik.c
// Deskripsi        : menampilkan faktor dari angka inputan N

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
