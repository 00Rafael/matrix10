#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Creo una matriz cuadrada de 1 y 0 con la misma cantidad
int main(void){
    //creo la variable n para guardar la anchura   
    int n;
printf("Cuantos casilleros en cada lado tiene el tablero?: ");
    scanf("%d", &n); 
    if(n<0){
        return 1;
    }
    printf("Si ha elegido un numero par en la matriz habrá la misma cantidad de 1 y 0. Y si no, \n habra una cantidad pareja \n");
    //creo un array de 2 dimensiones 
    int mat[n][n],c,f; 
    // La matriz sòlo tiene 0 y 1, por lo tanto necesito un contador para los mismos
    int unos = ceil((n*n)/2);
    int ceros = ceil((n*n)/2);
     srand(time(NULL));
 for (c=0; c<n; c++){
     for(f=0; f<n;f++){
         //Si se inicia un ciclo y me quedo sin ceros o unos
        if (unos==0 || ceros ==0){
                if (unos==0){
                    mat[f][c]=0; 
                    ceros--;
                }
                if (ceros==0){
                    mat[f][c]=1; 
                    unos--;
                }
                                }
        else{
            mat[f][c] = rand()%2;
            if(mat[f][c]==0){
                ceros--;
            }
            else{
                unos--;
            }
            }
printf("%3d ",mat[f][c]);
}printf("\n");
}
}

