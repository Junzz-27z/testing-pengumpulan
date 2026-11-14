#include <stdio.h>

void tampilDenah(char d[10][10], int b, int k) {
    for (int i = 0; i < b; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < k; j++) {
            printf("%c ", d[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int baris, kolom;
    printf("Masukkan jumlah baris (1-10): ");
    scanf("%d", &baris);
    while (baris < 1 || baris > 10) {
        printf("Jumlah baris harus antara 1 dan 10\n");
        printf("Masukkan jumlah baris (1-10): ");
        scanf("%d", &baris);
    }
        
    printf("Masukkan jumlah kolom (1-10): ");
    scanf("%d", &kolom);
    while (kolom < 1 || kolom > 10) {
        printf("Jumlah kolom harus antara 1 dan 10\n");
        printf("Masukkan jumlah kolom (1-10): ");
        scanf("%d", &kolom);
    }
        
    char denah[10][10];
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            denah[i][j] = 'O'; 
        }
    }

    printf("\nDenah awal:\n");
    printf(" ");
    for(int j = 0; j < kolom; j++) {
        printf(" %d", j + 1); 
    }
    printf("\n");
        
    tampilDenah(denah, baris, kolom);
        
    int r, c;
    do {
        printf("Pesan kursi baris 0 dan kolom 0 untuk selesai\n");
        printf("Pesan kursi (baris) : ");
        scanf("%d", &r);
        printf("Pesan kursi (kolom) : ");
        scanf("%d", &c);
        if (r == 0 && c == 0) {
            break;
        } else if (r > baris || c > kolom || r < 1 || c < 1) {
            printf("Kursi (%d, %d) di luar denah!\n", r, c);
        } else if (denah[r - 1][c - 1] == 'X') {
            printf("Kursi (%d, %d) sudah terisi!\n", r, c);
        } else {
            denah[r - 1][c - 1] = 'X'; 
            printf("Kursi (%d, %d) berhasil dipesan!\n", r, c);
            printf(" ");
            for(int i = 1; i <= kolom; i++) {
                printf(" %d", i);
            }
            printf("\n");
            tampilDenah(denah, baris, kolom);
        }
    } while (!(r == 0 && c == 0));

    printf("\nDenah akhir:\n");
    printf(" ");
        for(int j = 0; j < kolom; j++) {
            printf(" %d", j + 1); 
        }
    printf("\n");
    tampilDenah(denah, baris, kolom);
}