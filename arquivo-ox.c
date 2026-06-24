#include <stdio.h>
#include <stdlib.h>
#include "function_triplet.c"

int main(int argc, char *argv[])
{
    char matriz[3][3];
    int i, j;
    int k = 2;
    int linha,coluna;

    if (argc == 2)
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                linha = i+1;
                coluna = j+1;
                printf("Digite o elemento da linha %d e da coluna %d:\n",linha,coluna);
                scanf("%c",&matriz[i][j]);                
            }
        }
    } else if(argc == 11)
    {
        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                matriz[i][j] = argv[k][0];

                if(!validar(matriz[i][j]))
                {
                    printf("Erro: use apenas X ou O\n");
                    return 1;
                }
                k++;
            }
        }
    } else 
    {
        printf("Uso: %s arquivo.txt OU\n", argv[0]);        
        printf("%s arquivo.txt O O O X X X O O O\n", argv[0]);
        return 1;
    }
    gravar(matriz, argv[1]);
    return 0;
}
