//Nama Program: Pangkat
//Deskripsi: Implementasi program pangkat
//Nama Pembuat: Najib Rifai Indrayanto 24060120140082
//Tanggal Pembuatan: 1 April 2022

#include <stdio.h>

//SubProgram
float Pangkat(int a, int b)
//Deskripsi: menghitung hasil pemangkatan kedua bilangan
//Mereturn nilai real
{
    //kamus lokal
        int i;
        float Hasil;
        int j; //variabel peubah bilangan ke positif
    //algoritma
        if(b < 0){ //jika pangkat adalah negatif
            j = b * -1;
        }
        else{ //b >= 0
            j = b;
        }
        i = j;
        Hasil = 1;
        while(i >= 1){
            Hasil = Hasil * a;
            i = i-1;
        }
        if(b >= 1){
            return Hasil;
        }
        else if(b == 0){
            return 1;
        }
        else if(b < 0 ){
            return 1.0 / Hasil;;
        }

}

//Main Program
//Implementasi ke program utama
int main()
{
    //kamus
        float Hasil;
        int x;
        int y;
        float test;
    //algoritma
        printf("masukkan bilangan x dan pangkatnya: ");
        scanf("%d %d", &x, &y);
        Hasil = Pangkat(x, y);
        printf("%f", Hasil);

    return 0;
}
