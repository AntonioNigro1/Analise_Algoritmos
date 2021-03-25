#include <stdlib.h>
#include <stdio.h>

void selectionSort(int v[20])
{   
int i, min, x, j;
    for (i = 0; i < 19; ++i) {
    min = i;
      for (j = i+1; j < 20; ++j)
         if (v[j] < v[min])  min = j;
      x = v[i]; v[i] = v[min]; v[min] = x;
   }
}


void printvet(int v[20]){
    int i;
    for(i=0;i<20;i++){
        printf("%i\t", v[i]);
    }
}


int main (int argc, char const *argv[]){

    int i;
    int A[20];
    for(i=0; i<20; i++){
        A[i] = 1+ rand () %100;
		}
    
    printvet(A);
    printf("\n");
    selectionSort(A);
    printvet(A);


    return 0;
}