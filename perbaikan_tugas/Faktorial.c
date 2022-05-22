//Nama Program: Faktorial.c
//Nama NIM: Najib Rifai Indrayanto
//Tanggal Pembuatan: 1 April 2022
//Deskripsi: Implementasi fungsi faktorial untuk menghitung nilai faktorial

#include <stdio.h>

//Fungsi faktorial atau subprogram
int Faktorial(int N)
//Deskripsi: membuat sebuah fungsi untuk menghitung nilai faktorial sebuah bilangan N
{
    //kamus lokal
        int i;
        int Hasil;
    //algoritma
        if(N <= 1 && N >= 0){
            return 1;
        }
        else if(N > 1){ //Menghitung jumlah semua bilangan faktorial dari bilangan N
            i = N;
            Hasil = 1;
            while(i >= 1){
                Hasil = Hasil * i;
                i = i - 1;
            }
            return Hasil;
        }
        else{
            return 0;
        }
}
// Implementasi fungsi faktorial
// Program Utama
int main()
{
    //kamus
        int Hasil;
        int N;
    //algoritma
        printf("Masukkan bilangan yang ingin dicari faktorialnya: ");
        scanf("%d", &N);
        Hasil = Faktorial(N);
        printf("%d", Hasil);
    return 0;
}
