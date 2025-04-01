#include <stdio.h>

int main() {
    char  linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    printf("       Batalha Naval \n");
    
    // Inicializando o tabuleiro com 0 (água)

    int Tabuleiro[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
        {
            Tabuleiro[i][j] = 0;
        }
        
    }
    
    // Cordenadas dos navios 
    int linhaHorizontal = 2, colunaHorizontal = 4;
    int linhaVertical = 5, colunaVertical = 7;


    // Posicionamento do navio 1                                   // Navio 1
    for (int j = 0; j < 3; j++){
        Tabuleiro[linhaHorizontal][colunaHorizontal + j] = 1;
    }
    
    // Posicionamento do navio 2                                    // Navio 2
    for (int i = 0; i < 3; i++){                                     // 3 é definindo a quantidade de casas
    if (Tabuleiro[linhaVertical + i][colunaVertical] == 0) 
        {
            Tabuleiro[linhaVertical + i][colunaVertical] = 2;
        }
        
    }
    
    // Preenchimento das letras nas linhas
    printf(" ");                                // espaço para alinhar 
    for (int j = 0; j < 10; j++)
    {
        printf("%2d ", j);                     // 0 á 9 "%2d" mantém alinhado
    }
    
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%c ", linha[i]);              // irá imprimir A, B, C...
        for (int j = 0; j < 10; j++)
        {
            printf("%d  ", Tabuleiro[i][j]);  // zeros
        }
        
        printf("\n");
        printf("\n");
    }
    



    return 0;
}
