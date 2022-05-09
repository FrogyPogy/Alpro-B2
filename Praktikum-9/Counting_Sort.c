/** Program: Counting_Sort **/
/** Nama: Najib Rifai Indrayanto **/
/** NIM: 24060120140082**/
/** Tanggal Pembuatan: 9 Mei 2022 **/

#include <stdio.h>

//Sub Program
void CountingSort(int array[], int n)
{
    int i,b[n];

    //Mencari Elemen terbesar
    int max = array[0];
    for(i=1;i<n;i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    int count[max+1];

    //Menginisialisasi count array dengan 0
    for(i=0; i<=max; i++){
        count[i]=0;
    }

    //Menyimpan banyaknya angka pada setiap element contoh array{1,1,2,2,5} maka angka 1 memiliki banyak sebesar 2
    for(i=0; i<n; i++){
        count[array[i]] = count[array[i]]+1;
    }
    //Mengupdate count array
    for(i=1; i<=max; i++){
        count[i]=count[i]+count[i-1];
    }
    //Mencari index untuk menyimpan data pada array ke b
    for(i=n-1; i>=0; i--){
        b[--count[array[i]]] = array[i];
    }
    //Copy the sorted elements into the original array from array b
    for(i=0; i<n; i++){
        array[i] = b[i];
    }

}

//Main Program
int main()
{
    int n, i;
    printf("Masukkan banyaknya element dalam array: ");
    scanf("%d",&n);
    int array[n];

    printf("Masukkan element:\n");
    for(i=0;i<n; i++){
        scanf("%d",&array[i]);
    }
    CountingSort(array,n);

    printf("Array yang sudah di sorting adalah:\n");
    for(i=0; i<n; i++){
        printf("%d",array[i]);
    }
    return 0;
}

