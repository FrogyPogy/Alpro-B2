/*Nama File: CekSegitiga*/
/*Deskripsi: Mengecek dan menampilkan kategori segitiga*/
/*Nama Pembuat: Najib Rifai Indrayanto*/
/*Tanggal Pembuatan: 13-03-2022 23:24*/

#include<stdio.h>/*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
        int s1; /*masukan sisi1*/
        int s2; /*masukan sisi2*/
        int s3; /*masukan sisi3*/

    /*Algoritma*/
        printf("======================Mengecek jenis Segitiga=======================\n");
        printf("\n");
        printf("sisi1: ");
        scanf("%d", &s1);
        printf("sisi2: ");
        scanf("%d", &s2);
        printf("sisi3: ");
        scanf("%d", &s3);
        if(s1 > 0 && s2 > 0 && s3 > 0){
            if(s1 == s2 && s2 == s3){
                printf("Segitiga Sama Sisi");
            }
            else if(s1 == s2 || s1 == s3 || s2 == s3){
                printf("Segitiga Sama Kaki");
            }
            else if(s1 != s2 && s2 != s3){
                printf("Segitiga Sembarang");
            }
        }
        else{
            printf("Terdapat nilai yang bukan sisi segitiga");
        }
        return 0;
}

