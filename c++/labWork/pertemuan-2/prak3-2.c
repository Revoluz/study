
#include <stdio.h>  // Memasukkan library standar untuk input/output

int main() { // Fungsi utama program
    float a, b;  // Mendeklarasikan dua variabel tipe float
    int d;       // Mendeklarasikan satu variabel tipe int
    char c;      // Mendeklarasikan satu variabel tipe char

    c = 'B';     // Menginisialisasi variabel char c dengan karakter 'B'
    d = 5;       // Menginisialisasi variabel int d dengan nilai 5
    a = 9.25;    // Menginisialisasi variabel float a dengan nilai 9.25

    b = 0.5f * d + a;  // Menghitung nilai b: (0.5 * d) + a
                        // d adalah 5, jadi: b = (0.5 * 5) + 9.25
                        // b = 2.5 + 9.25 = 11.75

    printf("Nilai %c = %g ", c, b);  // Mencetak nilai karakter c dan nilai b
    return 0;  // Mengakhiri program
}
