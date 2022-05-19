/* Program   : main.c */
/* Deskripsi : Implementasi fungsi dan prosedur dari header mesinkata*/
/* NIM/Nama  : 24060120140082 Najib Rifai Indrayanto*/
/* Tanggal   : 19 Mei 2022*/

#include "mesinkata.h"
#include <stdio.h>
#include <stdlib.h>

char Pita_karakter[100]="pitakar.txt";
static FILE *FILEKU;
static int retval;

void START()
{
    FILEKU = fopen(Pita_karakter, "r");
    retval = fscanf(FILEKU, "%c", &CC);
}

void ADV()
{
    retval = fscanf(FILEKU, "%c", &CC);
    if(EOP()){
        fclose(FILEKU);
    }
}

void IgnoreBlank()
{
    while ((CC ==BLANK) && (CC != MARK)){
        ADV();
    }
}

void ADVKATA(Kata *CKata)
{
    SalinKata(*(&CKata));
    IgnoreBlank();
}

void SalinSemua(Kata *CKata)
{
    //KAMUS LOKAL
        int i;
    //ALGORITMA
        i = 0;
        for(;;){
            (*CKata).TabKata[i] = CC;
            ADV();
            if((CC == MARK) || (i == NMAX)){
                break;
            }
            else{
                i++;
            }

        }
        (*CKata).Length = i;
}

void SalinKata(Kata *CKata)
{
    //KAMUS LOKAL
        int i;
    //ALGORITMA
        i = 0;
        for(;;){//looping forever sampai ada break
            (*CKata).TabKata[i] = CC;
            ADV();
            if((CC == MARK) || (CC == BLANK)){
                break;
            }
            else{
                i++;
            }
        }
        (*CKata).Length = i;
}

int EOP()
{
    return(CC == MARK);
}

boolean Palindrom(Kata K)
/* Mengembalikan True jika K adalah Palindrom*/
{
    //Kamus Lokal
        int i, j;
        boolean k;
    //Algoritma
        i = 0;
        j = K.Length;
        k = true;
        while((i < j) && (K.TabKata[i] == K.TabKata[j]))
        {
            i++; //Membaca dari depan ke belakang
            j--; //Membaca dari belakang ke depan
        }
        if(K.TabKata[i] != K.TabKata[j])
        {
            k = false;
        }
        return k;
}

void printKata(Kata CKata)
{
    //Kamus Lokal
        int i;
    //Algoritma
        i = 0;
        while(i <= CKata.Length){
            printf("%c", CKata.TabKata[i]);
            i++;
        }
}
