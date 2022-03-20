/*Nama File 	: FaktorBil*/
/*Deskripsi 	: Menghitung dan menampilkan Faktor dari sebuah bilangan*/
/*Pembuat   	: Najib Rifai Indrayanto*/
/*Tgl Pembuatan	: 20 Maret 2022 18:47 */

#include <stdio.h>

int main()
{
    /*Kamus*/
        int i;
        int N;
    /*Algoritma*/
        printf("Masukkan bilangan faktor: ");
        scanf("%d", &N);
        if (N < 0){
            printf("N harus integer positif");
        }
        else{
            i = 1;
            while (i <= N){
                if ((N % i) == 0){
                    printf("%d\n", i);
                }
                i = i + 1;
            }
        }
        return 0;
}
