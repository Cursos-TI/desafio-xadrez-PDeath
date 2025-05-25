#include <stdio.h>

void moverTorre (int casa) {
    if (casa > 0) {                     //Casa está recebendo o valor de 5, e sendo recursivamente chamada até ser menor que zero
        printf("Direita\n");
        moverTorre (casa-1);
    }
}

void moverBispo (int casa) {
    if (casa <= 0) return;             //Aqui fazemos o controle se irá iniciar a função ou não fazendo a comparação da variavel casa sendo maior ou igual a zero

    for (int i=1; i<=1; i++){                  //Caso a variavel "casa" seja maior ou igual a zero, entramos nos laços aninhados que irão fazer o controle da direção enquanto existir valor em "casa".
        for (int j=1; j<=1; j++) {
            printf("Direita, ");
        }
        printf (" Cima\n");
        
        moverBispo (casa-1);            //Decremento de "casa"
    }    
}
void moverRainha (int casa) {               
    if (casa > 0) {         //Casa está recebendo o valor de 8, e sendo recursivamente chamada até ser menor que zero
        printf ("Esquerda\n");
        moverRainha (casa-1);
    }
}


void moverCavalo (int casa) {
    for (int i = 1; i <= casa; i++) {      
        if (i == 3) break; //  Sai do loop quando i é 3
        printf("Cima \n");
    } printf ("Direita");
}

int main () { 
    int torre = 5, bispo = 5, cavalo = 2, rainha = 8;   //declaração de variaveis
    
    printf("Direacao da Torre: \n");     //chamada das funções
    moverTorre (torre);
    printf("\nDireacao do Bispo: \n");
    moverBispo (bispo);
    printf("\nDireacao da Rainha: \n");
    moverRainha(rainha);
    printf("\nDireacao do Cavalo: \n");
    moverCavalo(cavalo);

    
    return 0;
}