/* Program   : main.c */
/* Deskripsi : Driver Program mesininverse.c*/
/* NIM/Nama  : 24060120140082 Najib Rifai Indrayanto*/
/* Tanggal   : 19 Mei 2022*/

#include<stdio.h>
#include<conio.h>
#include"mesininverse.h"

int main(){
    /* Kamus*/
        Karakter A;

    /* Algoritma */
        printf("----Start to Display file---\n");
        /** READ KARAKTER **/
        START();
        printf("\n");
        InsKar(&A);
        print(A);
        printf("\n");
        printf("----Write Inverse Karakter to File---\n");
        /** INVERSE KARAKTER AND WRITE KARAKTER**/
        INVERSE(A);
        /** Tampilan Hasil karakter yang di inverse **/
        printf("\n");
        printInv(A);
        printf("\n");

        printf("\n-End OF File-\nPress any key to stop.\n");
        getch();
        return 0;
}
