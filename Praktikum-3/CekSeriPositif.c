/*Nama File: CekSeriPositif*/
/*Deskripsi: Menghitung dan menampilkan tahanan total*/
/*Nama Pembuat: Najib Rifai Indrayanto*/
/*Tanggal Pembuatan: 13-03-2022 23:23*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
        int R1;     /*Hambatan atau tahanan 1*/
        int R2;     /*Hambatan atau tahanan 2*/
        int R3;     /*Hambatan atau tahanan 3*/
        int Rtotal; /*Hambatan atau tahanan total*/

    /*Algoritma*/
        printf("======================Menghitung Tahanan Total=======================\n");
        printf("\n");
        printf("Masukkan R1: ");
        scanf("%d", &R1); /*Input Tahanan 1*/
        printf("Masukkan R2: ");
        scanf("%d", &R2); /*Input Tahanan 2*/
        printf("Masukkan R3: ");
        scanf("%d", &R3); /*Input Tahanan 3*/
        if( R1 > 0 && R2 > 0 && R3 > 0 ){ /*cek nilai tahanan > 0 ?*/
            Rtotal = R1 + R2 + R3; /*Proses*/
            printf("Tahanan total adalah %d", Rtotal); /*Tampilan tahanan total*/
        }
        else{
            printf("Masukkan tahanan tidak boleh bernilai negatif");
        }
        return 0;
}

