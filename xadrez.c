#include <stdio.h>

int main () {
    
    int i=0, j=0, k;

    printf("Casas em que a torre vai andar:  \n");   
    
    do {
        printf("Direita \n");                   //Direção em que a torre vai andar
        i++;                                    // incremento
    } while (i != 5);                           // enquanto I for diferente de 5, a peça anda para a direita.


    printf("\nCasas em que o Bispo vai andar:  \n");

    while (j < 5) {                             //Comparação da variavel J com o numero de casa em que o "bispo" deve andar
        printf("Cima, Direita \n");             // Direção
        j++;                                    // Incremento
    }

    printf("\nCasas em que a Rainha vai andar:  \n");

    for (k=0; k<8; k++) {                       //Inicialização da variavel K, a comparação com o numero de casa que a rainha dede andar e o incremento
    printf("Esquerda!\n");                      //Direção
    }

    return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
