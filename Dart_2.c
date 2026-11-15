#include <stdio.h>

int main(){
    char identitas_kelompok[7][20] = {"Adit", "Agus", "Aldo", "Mirah", "Agung", "Hanie", "Devasya"};
    printf("Anggota Kelompok Dart :\n\n");
    for (int i = 0; i < 7; i++){
        printf("%d. %s\n", i + 1, identitas_kelompok[i]);
    }
    return 0;
}