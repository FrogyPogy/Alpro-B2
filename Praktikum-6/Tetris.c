/*Nama File     : Tetris*/
/*Deskripsi     : Menampilkan susunan karakter '*' pada layar dengan batas N*/
/*Pembuat       : Najib Rifai Indrayanto /24060120140082*/
/*Tgl Pembuatan : 19-03-2021 /23:10*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{
    /* Kamus */
        int N; /*batas pembentukan karakter '*' */
        int i; /*counter 1*/
        int j; /*counter 2*/

    /* Algoritma */
        printf("====================================Program Tetris=====================================\n");
        printf("Masukkan Integer positif: ");
        scanf("%d", &N); /*inputan batasnya*/
        if (N <= 0){
            printf("\nMasukan batas harus integer positif");
        }
        else{
            for (i=1; i<=N; i++){ /*Melooping baris dengan batas N*/
                j = 1; /*Inisialisasi nilai j*/
                while(j <= i){ /*Melooping character hingga batas i '*' */
                    printf("* "); /*Output character '*' */
                    j++; /*Increament*/
                }
                printf("--%d\n", j-1); /*Menghitung jumlah karakter '*' setiap satu baris*/
                printf("\n"); /*Output ganti baris setiap looping karakter '*' selesai*/
            }
            return 0;
        }

}
