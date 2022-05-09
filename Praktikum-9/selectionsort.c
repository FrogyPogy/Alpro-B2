/** Program: Selection_Sort **/
/** Nama: Najib Rifai Indrayanto **/
/** NIM: 24060120140082**/
/** Tanggal Pembuatan: 9 Mei 2022 **/

#include <stdio.h>

//Main Program
int main(){
    // Kamus
    int N, i;

    //Algoritma
    printf("Masukkan panjang tabel: ");
    scanf("%d",&N);
    int *p = (int*)malloc(N* sizeof(int));

    printf("Masukkan tabel yang ingin disorting\n");
    for(i=0; i<N; i++){
        scanf("%d", p+i);
    }
    selectionSort(p, N);
}

//Sub Program
void selectionSort(int T[], int N){
    /* Kamus lokal */
    int i, j; // counter
    int k;
    int temp;
    int idxmin;

    /* Algoritma */
    for(i = 0; i < N; i++){
        idxmin = i;
        for(j = i; j < N; j++){
            if(T[j] < T[idxmin]){
                idxmin = j;
            }
        }
        temp = T[i];
        T[i] = T[idxmin];
        T[idxmin] = temp;
        for(k = 0; k < N; k++){
            printf("%d ", T[k]);
        }
        printf("\n");
    }
}


