#include <stdio.h>

int ordenaValores (int *v, int tamanhoVetorInformado)
{
    int primeiro, segundo, terceiro, max, i, vetorRetorno[3];
    
    primeiro = v[0];
    segundo  = v[0];
    terceiro = v[0];
     
    for (i = 1; i < tamanhoVetorInformado; i++){
        if (v[i] > terceiro)
            terceiro = v[i];
        if (v[i] > primeiro && v[i] < terceiro)
            segundo = v[i];
        if (v[i] < primeiro)
            primeiro = v[i];
    }
    
    vetorRetorno[0] = primeiro;
    vetorRetorno[1] = segundo;
    vetorRetorno[2] = terceiro;
    
    return vetorRetorno;
}

int main()
{
    int i, tamanhoVetorInformado, tamanhoVetorRetornado;
    int v[3];
    int retorno;
    
    
    for (i = 0; i < 3; i++)
    {
     printf("Informe o %dº\n", i+1); 
     scanf("%d", &v[i]);
    }
    
    tamanhoVetorInformado = sizeof(v)/sizeof(v[0]);
    retorno = ordenaValores(v, tamanhoVetorInformado);
    tamanhoVetorRetornado  = sizeof(retorno)/sizeof(retorno[0]);
    printf("o tamanho do vetor retornado é %d\n", tamanhoVetorRetornado);
    return 0;
}
