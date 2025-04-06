#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

// Função para criar um mapa vazio
void criar_mapa(char mapa[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            mapa[i][j] = '0'; // '0' representa água
        }
    }
}

// Função para exibir o mapa
void exibir_mapa(char mapa[TAMANHO][TAMANHO]) {
    // Imprime o cabeçalho com letras (A-J)
    printf("   ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%c ", 'A' + i);
    }
    printf("\n");
    
    // Imprime o mapa com números (1-10) à esquerda
    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAMANHO; j++) {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar um navio
void posicionar_navio(char mapa[TAMANHO][TAMANHO], int x, int y, int tamanho, int vertical) {
    for (int i = 0; i < tamanho; i++) {
        if (vertical) {
            mapa[y + i][x] = '3'; // '3' representa parte de um navio
        } else {
            mapa[y][x + i] = '3';
        }
    }
}

int main() {
    char mapa[TAMANHO][TAMANHO];
    
    // Inicializa o mapa
    criar_mapa(mapa);
    
    // Posiciona alguns navios (exemplo)
    posicionar_navio(mapa, 1, 2, 3, 0); // Navio horizontal de tamanho 3
    posicionar_navio(mapa, 5, 5, 4, 1); // Navio vertical de tamanho 4
    
    // Exibe o mapa
    exibir_mapa(mapa);
    
    return 0;
}
