/*Nama Program : CekPrima.c*/
/*Deskripsi    : mengecek apakah bilangan tersebut adalah prima*/
/*Pembuat      : 24060121140158-Devin Januar Siahaan */
/*Tgl Pembuatan : Kamis. 24 Maret 2022*/


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
