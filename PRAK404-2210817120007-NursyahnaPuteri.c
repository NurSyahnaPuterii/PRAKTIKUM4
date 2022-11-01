#include <stdio.h>
int main ()
{
    int pilihan ;
    float i, j, a, b, n, x, y, z, w;

    while (pilihan !=5){
        printf ("Pilih program\n");
        printf ("1. Penjumlahan\n");
        printf ("2. Pengurangan\n");
        printf ("3. Perkalian\n");
        printf ("4. Pembagian\n");
        printf ("5. Exit\n");

        printf ("Masukan Pilahan : ");
        scanf ("%d", &pilihan);
    
    if (pilihan>5 || pilihan<=0) {
        printf ("Input anda salah, silahkan coba lagi\n");

    } else if (pilihan==5) {
        printf ("Terimakasih, telah menggunakan kalkulator Nursyahna Puteri\n");
    }
    else {
        printf ("Masukan nilai pertama : " );
        scanf ("%f", &a);
        printf ("Masukan nilai kedua : ");
        scanf ("%f", &b);
    } 
        x = a + b;
        y = a - b;
        z = a * b;
        w = a / b;

        if (pilihan==1){
            printf ("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, x);
        }else if (pilihan==2) {
                printf ("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, y);
        }else if (pilihan==3) {
                printf ("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, z);
        }else if (pilihan==4) {
            printf ("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, w);
        }

        printf ("\n");
    }
}