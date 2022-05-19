/* Program   : mesinkata.c */
/* Deskripsi : Implementasi Program mesinkata untuk menghitung jumlah kata dalam pitakarakter */
/* NIM/Nama  : 24060120140082 Najib Rifai Indrayanto*/
/* Tanggal   : 19 Mei 2022*/

#include <stdio.h>
#include "mesinkata.h"

/* definisi Pita */
char Pita_karakter[100]="pitakar.txt";
static FILE *FILEKU;
static int retval;

/*Body Prototype*/
void START()
/* I.S. sembarang */
/* F.S. CC adalah karakter pertama pita */
/*      Jika CC==MARK, EOP menyala(true) */
/*      Jika CC!=MARK, EOP padam(false) */


{
   FILEKU=fopen(Pita_karakter,"r");
   retval=fscanf(FILEKU,"%c",&CC);
   jumlah = 0;
   //printf("%d ",retval);
   //printf("%c ",CC);

}
int HIT_KATA()
{
    return jumlah;
}

void ADV()
/* I.S. CC!=MARK */
/* F.S. CC adalah karakter berikutnya CC pada I.S */
/*      Jika CC==MARK, EOP menyala(true) */
{
   retval=fscanf(FILEKU,"%c",&CC);
   //printf("%d ",retval);
   //printf("%c ",CC);
   if(CC == WBLANK)
   {
       jumlah = jumlah + 1;
   }
   if(EOP())
   {
       jumlah = jumlah + 1;
       fclose(FILEKU);
   }
}


int EOP()
/* true jika CC==MARK */
{
   return(CC==MARK);
}


