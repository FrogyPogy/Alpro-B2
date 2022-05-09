/** Program: Insertion_Sort **/
/** Nama: Najib Rifai Indrayanto **/
/** NIM: 24060120140082**/
/** Tanggal Pembuatan: 9 Mei 2022 **/

#include <stdio.h>

//Main Program
int main() { /*Program Utama*/

    /*Kamus Lokal*/
    int i;
    int N;

    /*Algoritma*/
    printf("Masukkan panjang tabel: ");
    scanf("%d",&N);
    int *p = (int*)malloc(N* sizeof(int));

    printf("Masukkan tabel yang ingin disorting\n");
    for(i=0; i<N; i++){
        scanf("%d", p+i);
    }

    InsertSort(p, N);

    //for(i=0; i<7; i++){
    //   printf("%d ", p[i]);
    //}
    /*output*/
    return 0;
}

//Sub Program
void InsertSort(int arr[], int N) {
    //kamus lokal
    int i, k, pass, temp;

    //algoritma
    for(pass= 1; pass < N; pass++){
        temp = arr[pass];
        i= pass - 1;

        while(temp  < arr[i] && i > 0){
            arr[i+1] = arr[i];
            i--;
        }

        if(temp >= arr[i]) {
            arr[i+1] = temp;
        }else {
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
        for(k=0; k<N; k++){
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}


