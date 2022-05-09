/** Program: Bubble_sort **/
/** Nama: Najib Rifai Indrayanto **/
/** NIM: 24060120140082**/
/** Tanggal Pembuatan: 9 Mei 2022 **/

#include <stdio.h>
#include <stdlib.h>


// MAIN PROGRAM
int main()
{
    /*Kamus*/
    int i,N,j,svd;//svd (SAVE)variabel menyimpan data sementara

    /*ALGORITMA*/
    printf("Masukkan panjang tabel: ");
    scanf("%d",&N);
    int *p = (int*)malloc(N* sizeof(int));
    printf("Masukkan tabel yang ingin disorting\n");
    for(i=0; i<N; i++){
        scanf("%d", p+i);
    }
    printf("Ini adalah tabel sebelum dilakukan sorting|");
    for(i=0; i<N; i++){
        printf("%d|",p[i]);
    }
    printf("setelah dilakukan sorting dari yang terkecil menjadi:\n");
    sorting(p,svd,N);


}
// SUB PROGRAM
void sorting(int *p,int svd, int N)
{
    //KAMUS LOKAL
        int i,j,k;
        int swapped; //Untuk mengecek apakah element dalam data tersebut dilakukan tukar element atau tidak

    //ALGORITMA
        for(i=0; i<N; i++){
            swapped = 0;
            printf("proses:%d \n",i+1);
            for(j=0;j<N-1;j++){
                if(p[j]>p[j+1]){
                    svd = p[j];
                    p[j] = p[j+1];
                    p[j+1] = svd;
                    swapped = 1;
                    for(k=0; k<N; k++)
                    {
                        printf("%d ",p[k]);
                    }
                }
                else
                {
                    printf("\n");
                    for(k=0; k<N; k++)
                    {
                        printf("%d ",p[k]);
                    }
                }
                printf("\n");

            }
            if(swapped == 0){
                break;
            }
        }
        for(i=0; i<N; i++){
            printf("%d|",p[i]);
        }
}
