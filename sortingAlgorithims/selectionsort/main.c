#include <stdio.h>
void selection_sort(int vetor[], int vetor2[], int n) { 
  int i, j, min, aux;
  for (i = 0; i < (n-1); i++){
     min = i;
     for (j = (i+1); j < n; j++){
       if(vetor[j] < vetor[min]) 
         min = j;
     }
     if (i != min){
       aux = vetor[i];
       vetor[i] = vetor[min];
       vetor[min] = aux;
       
       aux = vetor2[i];
       vetor2[i] = vetor2[min];
       vetor2[min] = aux;
     }
  }
}

int main(){ 
    int v[] = {5, 4, 2, 3};
    int v2[] = {3, 2, 4, 5};
    selection_sort(v, v2, 4); 
    
    printf("Aluno | Nota\n");
    for (int i = 0; i < 4; i++) {
       printf("%d | %d \n", v2[i], v[i]);
    }

    return 0;
}