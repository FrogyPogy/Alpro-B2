/*Nama File     : Tetris2*/
/*Deskripsi     : Menampilkan susunan karakter '*' pada layar dari 1 sampai N kembali ke 1*/
/*Pembuat       : Najib Rifai Indrayanto /24060120140082 */
/*Tgl Pembuatan : 20-03-2021 /10:55*/

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
            i = 1; /*Inisialisasi*/
            while(i <=2 * N-1){ /*Melooping jumlah keseluruhan baris*/
                if(i == N){
                    i = N; /*Inisialisasi*/
                    while(i >= 1){ /*Looping dari N kembali ke 1*/
                        j = 1; /*Inisialisasi*/
                        while(j <= i){
                            printf("* "); /*Menampilkan '*' pada satu baris*/
                            j = j + 1; /*Increament*/
                        }
                        printf("--%d\n", j-1); /*Mengidentifikasi jumlah '*' pada satu baris*/
                        printf("\n"); /*Mengganti ke baris selanjutnya*/
                        i = i -1; /*Derivation*/
                    }
                    break; /*Menghentikan looping pada kondisi terakhir*/
                }
                j = 1; /*inisialisasi*/
                while(j <= i){ /*Looping 1 sampai N*/
                    printf("* ");
                    j = j + 1;
                }
                printf("--%d\n", j-1);
                printf("\n");
                i = i + 1;
            }
        }
        return 0;
}
