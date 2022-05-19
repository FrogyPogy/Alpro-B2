/* Program   : mesinkata.h */
/* Deskripsi : Header program mesinkata */
/* NIM/Nama  : 24060120140082 Najib Rifai Indrayanto*/
/* Tanggal   : 19 Mei 2022*/

#ifndef mesinkata_H
#define mesinkata_H

#define BLANK ' '
#define MARK '.'
#define NMAX 50

typedef struct{char TabKata[NMAX];
                int Length;}Kata;

#include <stdio.h>
#include <stdlib.h>

#define false 0
#define true  1
#define boolean unsigned char

//Kata CKata; //Current kata
char CC;


boolean Palindrom(Kata K);
/* Mengembalikan True jika K adalah Palindrom*/

void IgnoreBlank();
/* Mengabaikan satu atau beberapa Blank space
I.S. : CC adalah sembarang
F.S. : CC != Blank atau CC = Mark
*/

void ADVKATA(Kata *CKata);
/* Untuk lanjut membaca kata selanjutnya
I.S. : CC adalah karakter pertama kata yang akan diakusisi
F.S. : CKata adalah kata terakhir yang sudah diakuisisi, CC adalah karakter
pertma dari kata yang berikutnya
*/

void SalinSemua(Kata *CKata);

void SalinKata(Kata *CKata);
/* mengakuisisi kata, menyimpan dalam CKata
I.S. : CC adalah karakter pertama dari kata
F.S. : CC = BLANK atau CC= MARK; CC adalah karakter sesudah huruf terakhir
kata yang diakuisisi; CKata berisi kata yang sudah diakuisisi.
*/

void START();
/*

*/

void ADV();
/*I.S. : CC !=MARK
F.S. : CC adalah karakter berikutnya atau jika CC == MARK, EOP menyala
*/

int EOP();
/* true jika CC == MARK */

#endif // mesinkata_H
