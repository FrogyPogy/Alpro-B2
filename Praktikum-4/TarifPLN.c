/*Nama File 	: TarifPLN*/
/*Deskripsi 	: Menghitung dan menampilkan besar tarif listrik*/
/*Pembuat   	: Najib Rifai Indrayanto*/
/*Tgl Pembuatan	: 20 Maret 2022 18:46 */

#include <stdio.h>/*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
        int gol;
        int w;
        int T;

    /*Algoritma*/
        printf("======================Menghitung Tarif PLN=======================\n");
        printf("\n");
        printf("Golongan 1 tarif: Rp1000/Kwh\n");
        printf("Golongan 2 tarif: Rp2000/Kwh\n");
        printf("\n");
        printf("Masukkan Golongan pemakai: ");
        scanf("%d", &gol);
        printf("Masukkan daya pemakaian (Kwh): ");
        scanf("%d", &w);
        if(gol == 1){
            if(w < 100){
                T = 100000;
            }
            else if(w >= 100 && w < 1000){
                T = w * 1000;
            }
            else if(w >= 1000){
                T = w * 1000 + (w * 1000 * 10.0/100);
            }
            printf("Tarif pemakaian sebesar: Rp %d", T);
        }
        else{
            if(w < 100){
                T = 200000;
            }
            else if(w >= 100 && w < 1000){
                T = w * 2000;
            }
            else if(w >= 1000){
                T = w * 2000 + (w * 2000 * 10.0/100);
            }
            printf("Tarif pemakaian sebesar: Rp %d", T);
        }

}
