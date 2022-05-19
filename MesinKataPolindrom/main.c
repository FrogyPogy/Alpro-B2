/* Program   : main.c */
/* Deskripsi : Driver Program mesinkata dengan fungsi palindrom */
/* NIM/Nama  : 24060120140082 Najib Rifai Indrayanto*/
/* Tanggal   : 19 Mei 2022*/

#include <stdio.h>
#include <stdlib.h>
#include "mesinkata.h"
int main()
{
    //KAMUS
        Kata k1;
        Kata k2;
        Kata BnykKata;
        int i;

    //ALGORITMA
        START();
//        ADVKATA(&k1);
//        printKata(k1);
//        ADVKATA(&k2);
//        printKata(&k2);

        SalinSemua(&BnykKata);
        printKata(BnykKata);

        if(Palindrom(BnykKata)){
            printf("\ntermasuk palindrom!!\n");
        }
        else{
            printf("\nBukan Palindrom!\n");
        }
        //ADVKATA(&k1);
        //printKata(k1);

    return 0;
}
