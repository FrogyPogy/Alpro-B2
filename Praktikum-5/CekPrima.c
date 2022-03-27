/*Nama File: CekPrima*/
/*Deskripsi: Mengecek dan menampilkan apakah suatu bilangan prima atau bukan*/
/*Nama Pembuat: Najib Rifai Indrayanto*/
/*Tanggal Pembuatan: 27-03-2022 21:47*/

#include <stdio.h>

int main()
{
    /*Kamus*/
        int i;
        int N;
        int k;
    /*Algoritma*/
        printf("Masukkan bilangan faktor: ");
        scanf("%d", &N);
        k = 0;
        if (N < 0){
            printf("N harus integer positif");
        }
        else{
            i = 1;
            while (i <= N){
                if ((N % i) == 0){
                    k = k + 1;
                    printf("%d\n", i);
                }
                i = i + 1;
            }
            printf("%d jumlah faktor: \n", k);
            if (k == 2){
                printf("%d merupakan bilangan prima\n", N);
            }
            else{
                printf("%d bukan termasuk bilangan prima\n", N);
            }
        }
        return 0;
}
