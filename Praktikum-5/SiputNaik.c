/*Nama File: SiputNaik*/
/*Deskripsi: Mengecek dan menampilkan waktu dalam hari yang diperlukan siput dalam mencapai tanah*/
/*Nama Pembuat: Najib Rifai Indrayanto*/
/*Tanggal Pembuatan: 27-03-2022 21:49*/


#include <stdio.h>

int main()
{
    /*Kamus*/
        int N;
        int i;
        int p;


    /*Algoritma*/
        printf("masukan posisi siput N(m): ");
        scanf("%d", &N);
        p = 0;
        if (N<0){
            printf("N harus positif");
        }
        else{
            i = 0; /*Inisialisasi*/
            p = 0; /*Inisialisasi*/
            while (i <= N){
                p = p + 1;
                i = i + 3;
                if (i < N){
                    i = i - 1;
                }
                printf("\n%d", i);
            }
            printf("\n%dhari", p);
        }
        return 0;
}
