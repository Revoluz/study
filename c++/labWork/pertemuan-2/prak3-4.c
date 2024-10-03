
/* File Program : prak3-4.c */
#include <stdio.h>   // Mengimpor header untuk input/output standar
#include <stdlib.h>  // Mengimpor header untuk fungsi utilitas umum
#include <limits.h>  // Mengimpor header yang mendefinisikan batasan tipe integer
#include <float.h>   // Mengimpor header yang mendefinisikan batasan tipe floating-point

int main() { // Fungsi utama program
    printf("CHAR_BIT : %d\n", CHAR_BIT); // Mencetak jumlah bit dalam tipe char
    printf("CHAR_MAX : %d\n", CHAR_MAX); // Mencetak nilai maksimum untuk tipe char
    printf("CHAR_MIN : %d\n", CHAR_MIN); // Mencetak nilai minimum untuk tipe char
    printf("Storage size for int : %zu \n", sizeof(int)); // Mencetak ukuran penyimpanan untuk int
    printf("INT_MAX : %d\n", INT_MAX); // Mencetak nilai maksimum untuk tipe int
    printf("INT_MIN : %d\n", INT_MIN); // Mencetak nilai minimum untuk tipe int
    printf("Storage size for long : %zu \n", sizeof(long)); // Mencetak ukuran penyimpanan untuk long
    printf("LONG_MAX : %ld\n", LONG_MAX); // Mencetak nilai maksimum untuk tipe long
    printf("LONG_MIN : %ld\n", LONG_MIN); // Mencetak nilai minimum untuk tipe long
    printf("Storage size for float : %zu \n", sizeof(float)); // Mencetak ukuran penyimpanan untuk float
    printf("FLT_MAX : %g\n", FLT_MAX); // Mencetak nilai maksimum untuk tipe float
    printf("FLT_MIN : %g\n", FLT_MIN); // Mencetak nilai minimum untuk tipe float
    printf("-FLT_MAX : %g\n", -FLT_MAX); // Mencetak nilai maksimum untuk tipe float negatif
    printf("-FLT_MIN : %g\n", -FLT_MIN); // Mencetak nilai minimum untuk tipe float negatif
    printf("DBL_MAX : %g\n", DBL_MAX); // Mencetak nilai maksimum untuk tipe double
    printf("DBL_MIN : %g\n", DBL_MIN); // Mencetak nilai minimum untuk tipe double
    printf("-DBL_MAX : %g\n", -DBL_MAX); // Mencetak nilai maksimum untuk tipe double negatif
    printf("Precision value: %d\n", FLT_DIG ); // Mencetak nilai presisi untuk float
    return 0; // Mengakhiri program
}
