/*Nama File 	: Kalk-SS*/
/*Deskripsi 	: Membuat kalkulator sederhana dengan operator dasar aritmatika*/
/*Pembuat   	: Najib Rifai Indrayanto*/
/*Tgl Pembuatan	: 13-03-2022 23:26*/

#include <stdio.h>/*Header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
        float iA;/*Operan 1*/
        float iB;/*Operan 2*/
        float H; /*Hasil pengoperasian*/
        int G; /*Hasil pengoperasian untuk div*/
        char opr;
        int iA1; /*convert float ke integer*/
        int iB1; /*convert float ke integer*/

    /*Algoritma*/
        printf("================Kalkulator Super Sederhana==============\n");
        printf("\n");
        printf("a: operan 1 + operan 2\n");
        printf("b: operan 1 - operan 2\n");
        printf("c: operan 1 * operan 2\n");
        printf("d: operan 1 / operan 2\n");
        printf("e: operan 1 div operan 2\n");
        printf("f: operan 1 mod operan 2\n");
        printf("\n");
        printf("Masukan pilihan operator: ");
        scanf("%c", &opr);
        printf("Masukkan operan 1: ");
        scanf("%f", &iA);
        printf("Masukkan operan 2: ");
        scanf("%f", &iB);

        if(opr == 'a'){
            H = iA + iB;
            printf("%.1f", H);
        }
        else if(opr == 'b'){
            H = iA - iB;
            printf("%.1f", H);
        }
        else if(opr == 'c'){
            H = iA * iB;
            printf("%.1f", H);
        }
        else if(opr == 'd'){
            H = iA / iB;
            printf("%.1f", H);
        }
        else if(opr == 'e'){
            G = iA / iB;
            printf("%d", G);
        }
        else if(opr == 'f'){
            iA1 = (int)iA;
            iB1 = (int)iB;
            H =  iA1 % iB1;
            printf("%.f", H);
        }
        else{
            printf("Bukan pilihan menu yang benar");
        }
        return 0;

}

