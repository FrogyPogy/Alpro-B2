/*Nama File: CekSempurna*/
/*Deskripsi: Mengecek dan menampilkan apakah suatu bilangan termasuk bilangan sempurna atau bukan*/
/*Nama Pembuat: Najib Rifai Indrayanto*/
/*Tanggal Pembuatan: 27-03-2022 21:48*/

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
            while (i < N){
                if ((N % i) == 0){
                    k = k + i;
                    printf("%d\n", i);
                }
                i = i + 1;
            }
        }
        printf("\nJumlah faktor %d", N);
        printf(" adalah %d", k);
        if(k == N){
            printf("\n%d Termasuk bilangan sempurna" , N);
        }
        else{
            printf("\n%d Bukan bilangan sempurna" , N);
        }
}
