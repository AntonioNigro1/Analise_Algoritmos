#include <stdlib.h>
#include <stdio.h>

void iSort(int v[20])
{   
    int j, i, x;
   for ( j = 1; j < 20; ++j) {
        x = v[j];
        i;
      for (i = j-1; i >= 0 && v[i] > x; --i) 
         v[i+1] = v[i];
      v[i+1] = x;
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
    iSort(A);
    printvet(A);

    return 0;
}