#include <stdio.h>
#include "mesininverse.h"

/* definisi Pita */
char Pita_karakter[100]="pitakar.txt";
char Pita_karakter2[100]="hasil_inverse.txt";
static FILE *FILEKU;
static int retval;
static int jkar;

/*Body Prototype*/
void START()
/* I.S. sembarang */
/* F.S. CC adalah karakter pertama pita */
/*      Jika CC==MARK, EOP menyala(true) */
/*      Jika CC!=MARK, EOP padam(false) */
{
   FILEKU=fopen(Pita_karakter,"r");
   retval=fscanf(FILEKU,"%c",&CC);
   //printf("%d ",retval);
   //printf("%c ",CC);

}

void READY()
/*Mesin disiapkan, pita disiapkan untuk direkam.
Jendela siap ditulisi sebuah karakter yang akan direkam pada posisi pertama
I.S. : Sembarang
F.S. : posisi perekaman pertama
*/
{
    FILEKU = fopen(Pita_karakter2,"w");
}

void INVERSE(Karakter T)
{
    /*Kamus Lokal*/
        int i;
        char c;
    /*Algoritma*/
        i = jkar;
        READY();
        while(i >= 0){
            c = T.wadah[i];
            fprintf(FILEKU, "%c", c);
            i--;
        }
        MARKER();
        printf("\nfile karakter berhasil di invers..\n");
}

void InsKar(Karakter *T)
{
//kamus lokal

//algoritma
    jkar = 0;
    while(!EOP() && (jkar <= 50)){
        (*T).wadah[jkar] = CC;
		jkar++;
		ADV();
	}
	jkar = jkar-1;
}

void ADV()
/* I.S. CC!=MARK */
/* F.S. CC adalah karakter berikutnya CC pada I.S */
/*      Jika CC==MARK, EOP menyala(true) */
{
   retval=fscanf(FILEKU,"%c",&CC);
   //printf("%d ",retval);
   //printf("%c ",CC);

   if(CC==MARK)
   {
       fclose(FILEKU);
   }
}

int EOP()
/* true jika CC==MARK */
{
   return(CC==MARK);
}

void MARKER()
/*
Pita direkami dengan tanda akhir pita (mark)
*/
{
    fprintf(FILEKU, "%c",MARK);
    fclose(FILEKU);
}

char print(Karakter T)
{
    //Kamus Lokal
    int i;
    //Algoritma
    i = 0;
    while(i <= jkar){
        printf("%c", T.wadah[i]);
        i++;
    }
}

char printInv(Karakter T)
/*Mencetak semua karakter di T secara terbalik*/
{
    //Kamus Lokal
        int i;
    //Algoritma
        i = jkar;
        while(i >= 0){
            printf("%c", T.wadah[i]);
            i--;
        }
}



