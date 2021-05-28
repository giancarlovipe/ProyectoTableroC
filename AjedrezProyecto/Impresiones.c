/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include"Impresiones.h"

void printTablero(){
    int cont = 8;
    system("clear"); 
    
    for(int i=0;i<8;i++){
        printf("%d ", cont);
        cont--;
        for(int j=0;j<8;j++){
            printf("| %c ", matrizPiezas[i][j].tipo);
        }
        printf("| \n");
        
    }
    printf("%s", "    A   B   C   D   E   F   G   H");
}

void solicitarMovimiento(char* color){
    
    printf("\nTurno de: ");
    printf("%s \n",color);
    
    printf("\nIngrese coordenada: ");
    scanf("%c", &y);
    scanf("%c", &x);
    
    printf("%c \n", y);
    printf("%c \n", x);
    espera();
    
}

void solicitarMovimientoDestino(char* color){
    printf("\nTurno de: ");
    printf("%s \n",color);
    
    printf("\nIngrese coordenada: ");
    scanf("%c", &desty);
    scanf("%c", &destx);
    
    printf("%c \n", desty);
    printf("%c \n", destx);
}

void error(char* val){
    printf("\nError! "); 
    printf("%s", val);
    espera();
}

void espera(){
    int x;
    do {
        x = getchar();
    } while (x != '\n' && x != EOF);
    if (x == EOF){
    } else {
        printf("\n\n Presione enter para continuar...");
        getchar();
    }
}