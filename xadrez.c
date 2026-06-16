#include <stdio.h>

int main(){
    int i_torre = 0, i_bispo = 0, i_rainha = 0, i_cavalo = 0;
    for (i_torre; i_torre <= 4; i_torre++){
        printf("TORRE - Direita\n");
    }
    for (i_bispo; i_bispo <= 4; i_bispo++){
        printf("BISPO - Cima\n");
        printf("BISPO - Direita\n");
    }
    for (i_rainha; i_rainha <= 7; i_rainha++){
        printf("RAINHA - Esquerda\n");
    }
    for (i_cavalo; i_cavalo <= 0; i_cavalo++){
        for (int i_cavalo_subindo = 0; i_cavalo_subindo <= 1; i_cavalo_subindo++){
            printf("CAVALO - Cima\n");    
        }
        printf("CAVALO - Direita\n");
    }
    
    return 0;
}
