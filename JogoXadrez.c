#include <stdio.h>

int main(){
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavalo = 1;

    //MOVIMENTO DA TORRE
    //A torre se move 5 casas para a direita

    printf ("Movimento da torre: \n");

    for (int i = 0;

        i < casasTorre; i++) {
                printf("Direita \n");
        }
    

    //Movimento Do Bispo
    //O bispo se move 5 casas na diagonal para cima e à direita

    printf ("\n Movimento do Bispo: \n");

        int i = 0;

        while (i < casasBispo) {
            printf("Cima Direita \n");
            i++;
        }

    //Movimento da Rainha
    // A rainha se move 8 casas para a esquerda 

    printf("\n Movimento da Rainha: \n");

        int j = 0;

        do {
            printf("esquerda\n");
            j++;
        } while (j < casasRainha);

    //MOviemento Do Cavalo 
    printf("Movimentos do Cavalo \n");{

        for (int m = 0; m < casasCavalo; m++) {
            //movimento duas vezes para baixo com for
            for (int k = 0; k <2;
            k++) {
                printf ("Baixo \n");
            }

    // movimento para esquerda com while
            int l = 0;
            while ( l < 1)
            {
             printf ("esquerda \n");
            l++;
            }
            
        }
        
    }
    return 0;
}
