#include <stdio.h>

int main() {
    
    char  linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    printf("   #####  Batalha Naval  ##### \n");
    printf("\n");

    // Inicializando o tabuleiro com 0 (água)
    int Tabuleiro[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
        {
            Tabuleiro[i][j] = 0;
        }
        
    }
    
    // Cordenadas dos navios 1 e 2
    int linhaHorizontal = 8, colunaHorizontal = 2;      // 8 = linha vertical 2 = linha vertical
    int linhaVertical = 4, colunaVertical = 1;          // 4 = linha vertical 1 = linha vertical


    // Posicionamento do navio 1                                   // Navio 1
    for (int j = 0; j < 3; j++)
    {
        Tabuleiro[linhaHorizontal][colunaHorizontal + j] = 1;
    }
    
    // Posicionamento do navio 2                                    // Navio 2
    for (int i = 0; i < 3; i++)                                     // 3 é definindo a quantidade de casas
    {
        if (Tabuleiro[linhaVertical + i][colunaVertical] == 0) 
        {
            Tabuleiro[linhaVertical + i][colunaVertical] = 2;
        }
        
    }

    // Coordenadas dos navios diagonais 3 e 4                   
    int linhaDiagonal1 = 1, colunaDiagonal1 = 1;
    int linhaDiagonal2 = 6, colunaDiagonal2 = 8;

    // Posicionamento do navio 3 (diagonal principal)               // Navio 3
     for (int i = 0; i < 3; i++) {
        if (Tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] == 0) {
            Tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = 3;
        }
    }

    // Posicionamento do navio 4 (diagonal secundária)              // Navio 4
    for (int i = 0; i < 3; i++) {
        if (Tabuleiro[linhaDiagonal2 - i][colunaDiagonal2 - i] == 0) {
            Tabuleiro[linhaDiagonal2 - i][colunaDiagonal2 - i] = 3;
        }
    }

    
    // Preenchimento das letras nas linhas
    // Exibição do tabuleiro
    printf("  ");                       // Espaço para alinhamento
    for (int j = 0; j < 10; j++) {
        printf("%2d ", j);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);        // Letras A-J para referência
        for (int j = 0; j < 10; j++) {
            printf("%d  ", Tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}
