#include <stdio.h>

void mover_Torre(int casas){
    if (casas > 0){
        printf("Torre - Direita\n");
        mover_Torre(casas - 1);
    }

}

void mover_Bispo(int casas){
    if (casas > 0){
        printf("Bispo - Cima\n");
        printf("Bispo - Direita\n");
        mover_Bispo(casas - 1);
    }
}

void mover_Rainha(int casas){
    if (casas > 0){
        printf("Rainha - Esquerda\n");
        mover_Rainha(casas - 1);
    }
}

void mover_Cavalo(int casas){
    if (casas > 0){
        printf("Cavalo - Cima\n");
        printf("Cavalo - Cima\n");
        printf("Cavalo - Direita\n");
        mover_Rainha(casas - 1);
    }
}

int main(){
    int i_torre = 5, i_bispo = 4, i_rainha = 8, i_cavalo = 1;
    mover_Torre(i_torre);
    mover_Bispo(i_bispo);
    mover_Rainha(i_rainha);
    mover_Cavalo(i_cavalo);
    return 0;
}
