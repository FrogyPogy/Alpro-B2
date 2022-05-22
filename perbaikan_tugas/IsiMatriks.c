//Nama Program: isiMatriks.c
//Deskripsi: Mengisi elemen matriks persegi dengan value 1, 2, 0 terhadap diagonal matriks
//Nama Pembuat: Najib Rifai Indrayanto 24060120140082
//Tanggal Pembuatan: 22 Mei 2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
        int M;
        int N;
        int i;
        int j;
        int arr[20][20];

    /* Algoritma */
        printf("Masukkan Dimensi matriks: ");
        scanf("%d %d", &M, &N);
        if(M != N){
            printf("M dan M harus sama");
        }
        else{
            if(M <=0 || N <=0){
                printf("M dan N harus positif");
            }
            for(i = 0; i<=M; i++){ //Mengisi nilai matriks tiap baris
                for(j = 0; j<=N; j++){//Mengisi nilai matriks tiap kolomg
                    if(i == j){
                        arr[i][j] = 1; //Mengisi nilai diagonal matriks
                    }
                    else{
                        if(i < j){ //Mengisi nilai diagonal atas matriks
                            arr[i][j] = 0;
                        }
                        else{ //Mengisi nilai diagonal bawah matriks
                            arr[i][j] = 2;
                        }
                    }
                }
            }
            for(i = 0; i<M; i++){
                for(j=0; j<N; j++){
                    printf("%d ",arr[i][j]);
                }
                printf("\n");
            }
        }


        return 0;

}
