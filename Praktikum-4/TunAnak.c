/*Nama File 	: TunAnak*/
/*Deskripsi 	: Menghitung dan menampilkan besaran tunjangan anak yang diberikan*/
/*Pembuat   	: Najib Rifai Indrayanto*/
/*Tgl Pembuatan	: 20 Maret 2022 18:45 */

#include <stdio.h>/*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
        int JA; /*Jumlah Anak*/
        int g;  /*Gaji Pokok*/
        int T;  /*Tunjangan Anak*/

    /*Algoritma*/
        printf("======================Menghitung Tunjangan Anak=======================\n");
        printf("\n");
        printf("Masukkan jumlah anak: ");
        scanf("%d", &JA); /**/
        printf("Masukkan gaji pokok Rp: ");
        scanf("%d", &g);
        if(g > 0){
            if(JA < 2){
                T = 0 * (10.0/100 * g);
            }
            else if(JA == 2){
                T = 2 * (10.0/100 * g);
            }
            else if(JA == 3){
                T = 3 * (10.0/100 * g);
            }
            else{
                T = 3 * (10.0/100 * g);
            }
            printf("Tunjungan anak sebesar: Rp %d", T);
        }
        else{
            printf("Tidak memiliki tunjangan anak");
        }
        return 0;
}
