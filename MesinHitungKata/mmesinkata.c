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
