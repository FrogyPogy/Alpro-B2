/*Nama File: CekBulan*/
/*Deskripsi: Mengecek dan menampilkan nama bulan dari nomor 1 s.d. 12*/
/*Nama Pembuat: Najib Rifai Indrayanto*/
/*Tanggal Pembuatan: 13-03-2022 23:22*/

#include <stdio.h>/*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
        int n;/*Masukkan n integer 1 s.d. 12*/

    /*Algoritma*/
        printf("======================Mengecek jenis Segitiga=======================\n");
        printf("\n");
        printf("Masukkan nilai integer untuk nomor bulan: ");
        scanf("%d", &n); /*Input nilai integer*/
        if(n <= 12 && n >= 1){ /*Cek nomor bulan*/
            if(n == 1){
                printf("Januari");
            }
            if(n == 2){
                printf("Februari");
            }
            if(n == 3){
                printf("Maret");
            }
            if(n == 4){
                printf("April");
            }
            if(n == 5){
                printf("Mei");
            }
            if(n == 6){
                printf("Juni");
            }
            if(n == 7){
                printf("Juli");
            }
            if(n == 8){
                printf("Agustus");
            }
            if(n == 9){
                printf("September");
            }
            if(n == 10){
                printf("Oktober");
            }
            if(n == 11){
                printf("November");
            }
            if(n == 12){
                printf("Desember");
            }
        }
        else{
            printf("Masukkan nomor bulan tidak tepat");
        }


}

