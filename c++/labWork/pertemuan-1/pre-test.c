/*#include <stdio.h>*/

/*int main(){*/
/*int Be = 345,da=-768;*/
/*float la= 123.4567890123;*/
/*printf("%d \n", Be);  // Menggunakan tanda kutip lurus*/
/*printf("%d \n",Be);*/
/*printf("%i \n",Be);*/
/*printf("10%d \n",da);*/
/*printf("10%u \n",da);*/
/*printf("%hd \n",Be);*/
/*printf("%ld \n",Be);*/
/*printf("%f \n",la);*/
/*printf("%10.5f \n",la);*/
/*printf("%e \n",la);*/
/*printf("%g \n",la);*/
/*printf("Perkalian Be x la = %10.3f \n",Be*la);*/
/*printf("Pembagian da / Be = %10.5f \n",da/Be);*/
/*return 0;*/
/*}*/
/**/
#include <stdio.h>

int main(){
    int Be = 345, da = -768;
    float la = 123.4567890123;

    // Menampilkan nilai Be dengan format %d dan %i (untuk integer)
    printf("%d \n", Be);  // Menggunakan tanda kutip lurus
    printf("%d \n", Be);  // format %d
    printf("%i \n", Be);  // format %i (sama seperti %d)

    // Menampilkan nilai da
    printf("10%d \n", da);  // format %d untuk integer bertanda (signed)

    // Mengganti %u (unsigned) dengan %d karena da adalah bilangan bertanda (signed)
    printf("10%d \n", da);

    // Format %hd dan %ld tidak relevan untuk int, tetapi bisa digunakan dengan casting
    printf("%hd \n", (short)Be);  // Tampilkan sebagai short int (cast ke short)
    printf("%ld \n", (long)Be);   // Tampilkan sebagai long int (cast ke long)

    // Menampilkan nilai float la
    printf("%f \n", la);          // menampilkan float biasa
    printf("%10.5f \n", la);      // menampilkan float dengan format lebar 10 karakter dan 5 desimal
    printf("%e \n", la);          // menampilkan dalam format scientific notation
    printf("%g \n", la);          // menampilkan format float yang lebih ringkas

    // Perkalian Be * la
    printf("Perkalian Be x la = %10.3f \n", Be * la);  // menampilkan hasil perkalian dengan 3 desimal

    // Pembagian da / Be, lakukan casting agar hasilnya float
    printf("Pembagian da / Be = %10.5f \n", (float)da / Be);

    return 0;
}
