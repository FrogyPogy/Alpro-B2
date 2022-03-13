/*Nama File: CekHari*/
/*Deskripsi: Mengecek dan menampilkan Nama Hari*/
/*Nama Pembuat: Najib Rifai Indrayanto*/
/*Tanggal Pembuatan: 13-03-2022 23:18*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main()
{
    /*Kamus*/
        int h;  /* Integer untuk hari*/

    /*Algoritma*/
        printf("======================Mengecek Nama Hari=======================\n");
        printf("\n");
        printf("Masukkan nomor hari: ");
        scanf("%d", &h);  /*Input integer h untuk hari*/
        if(1 <= h && h <= 7){ /*Cek apakah inputan h >= 1 dam <= 7*/
            if(h == 1){
                printf("Hari Senin");
            }
            else if(h == 2){
                printf("Hari Selasa");
            }
            else if(h == 3){
                printf("Hari Rabu");
            }
            else if(h == 4){
                printf("Hari Kamis");
            }
            else if(h == 5){
                printf("Hari Jum'at");
            }
            else if(h == 6){
                printf("Hari Sabtu");
            }
            else{
                printf("Hari Minggu");
            }
        }
        else{ /*Jika inputan h tidak dalam ranah integer hari atau inputan bukan intger*/
            printf("Masukkan nomor hari tidak tepat");
        }
        return 0;

}
