/* Program   : mesininverse.h */
/* Deskripsi : Header program mesininverse untuk mencatat hasil inverse sebuah pita karakter */
/* NIM/Nama  : 24060120140082 Najib Rifai Indrayanto*/
/* Tanggal   : 19 Mei 2022*/

#ifndef MESININVERSE_H
#define MESININVERSE_H

#ifndef WBLANK
#define WBLANK ' '
#endif

#ifndef MARK
#define MARK '.'
#endif

#ifndef ENTER
#define ENTER 10
#endif

typedef struct { char wadah[50];
                } Karakter;

char CC; /* definisi states */

/*Prototype*/
void START();
/* I.S. sembarang */
/* F.S. CC adalah karakter pertama pita */
/*      Jika CC==MARK, EOP menyala(true) */
/*      Jika CC!=MARK, EOP padam(false) */


void INVERSE(Karakter T);
/*Membuat inverse dari sebuah masukkkan array character
I.S. T terisi karakter dan file hasil_inverse.txt kosong
F.S. hasil_inverse.txt terisi karakter T dengan posisi terbalik
*/

void InsKar(Karakter *T);
/*Membaca file pitakarakter.txt dan menyalin ke dalam array T
I.S. T kosong
F.S. T terisi karakter dari pitakarakter.txt
*/

char print(Karakter T);
/*Mencetak semua karakter di T*/

char printInv(Karakter T);
/*Mencetak semua karakter di T secara terbalik*/

void READY();
/*Mesin disiapkan, pita disiapkan untuk direkam.
Jendela siap ditulisi sebuah karakter yang akan direkam pada posisi pertama
I.S. : Sembarang
F.S. : posisi perekaman pertama
*/

void REG();
/*Merekam dan posisi pita yang siap direkam dimajukan satu karakter.
I.S: Karakter pada jendela = CC, CC != '.'
F.S: CC direkam pada posisi perekaman, pita maju satu karakter
*/

void ADV();
/* I.S. CC!=MARK */
/* F.S. CC adalah karakter berikutnya CC pada I.S */
/*      Jika CC==MARK, EOP menyala(true) */

void MARKER();
/* Pita direkami dengan tanda akhir pita (mark) */

int EOP();
/* true jika CC==MARK */

#endif // MESINKAR_H_INCLUDED
