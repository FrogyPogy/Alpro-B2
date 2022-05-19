/* Program   : mmesin.c */
/* Deskripsi : Driver Program mesinkata.c untuk menghitung jumlah kata dalam pitakarakter */
/* NIM/Nama  : 24060120140082 Najib Rifai Indrayanto*/
/* Tanggal   : 19 Mei 2022*/

#include<stdio.h>
#include<conio.h>
#include"mesinkata.h"

int main(){
    int jmlh;
	printf("awal pita\n");
	START();
	while(!EOP()){
		printf("%c",CC);
		ADV();
	}
	jmlh = HIT_KATA();
	printf("\n akhir pita");
	printf("\njumlah kata dalam pita_karakter sebesar: %d", jmlh);
	getch();
	return 0;
}
