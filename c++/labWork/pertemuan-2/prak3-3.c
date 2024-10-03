
/* File program: prak3-3.c */
#include <stdio.h>   // Memasukkan library untuk input/output standar
#include <string.h>  // Memasukkan library untuk manipulasi string (meskipun tidak digunakan dalam kode ini)

int main() {  // Fungsi utama program
    float x = 10.327;      // Mendeklarasikan dan menginisialisasi variabel float x dengan nilai 10.327
    double y = 4244.546;   // Mendeklarasikan dan menginisialisasi variabel double y dengan nilai 4244.546
    int z = 28;            // Mendeklarasikan dan menginisialisasi variabel int z dengan nilai 28

    printf("The float value : %f\n", x);  // Mencetak nilai x (float) menggunakan format specifier %f
    printf("The double value : %f\n", y); // Mencetak nilai y (double) menggunakan format specifier %f
    printf("The sum of float, double and int variable : %f\n", (x + y + z)); // Menghitung dan mencetak jumlah x, y, dan z

    return 0;  // Mengakhiri program
}
