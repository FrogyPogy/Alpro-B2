/*Nama File     : Tetris1*/
/*Deskripsi     : Menampilkan susunan karakter '*' pada layar dari N sampai 1*/
/*Pembuat       : Najib Rifai Indrayanto /24060120140082 */
/*Tgl Pembuatan : 20-03-2021 /00:03*/

#include <stdio.h> /*Header File */

/* Program Utama */
int main()
{
    /* Kamus */
        int N; /*Integer batas untuk character '*' */
        int i; /*Counter 1*/
        int j; /*Counter 2*/

    /* Algoritma */
        printf("====================================Program Tetris1=====================================\n");
        printf("Masukkan integer batas: ");
        scanf("%d", &N); /*Masukkan batas N*/
        if (N <= 0){
            printf("Masukan harus integer positif");
        }
        else{ /*N > 0*/
            for(i=N; i >=1; i =i-1 ){ /*Melooping baris hingga batas N*/
                j = 1; /*Inisialisasi nilai j*/
                while(j <= i){ /*Melooping character dari i hingga 1*/
                    printf("* "); /*Output karakter '*' pada satu baris*/
                    j = j+1; /*Increment*/
                }
                printf("--%d\n", j-1); /*Output baris ke-i */
                printf("\n"); /*Mengganti baris setiap melooping '*' selesai */
            }
        }
        return 0;
}
