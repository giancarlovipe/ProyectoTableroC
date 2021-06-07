/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include"Impresiones.h"

void printTableroSolucion(){
    int cont = 8;
    for (int x = 0; x < 8; x++) {
        printf("%d ", cont);
        cont--;
            for (int y = 0; y < 8; y++)
                printf("| %2d ", matrizCasillas[x][y].solucion + 1);
        printf("| \n");
    }
    printf("%s", "     A    B    C    D    E    F    G    H");
}

int printIniciaSistema(){
    int val;
    system("clear");
    printf("********************************************* \n");
    printf("*** Solucion Problema del Caballo Cerrado *** \n");
    printf("********************************************* \n\n");
    printTableroSolucion();
    
   printf("\n\n*** Digite una opcion del menu *** \n\n");

    printf("*** 1. Paso a paso del caballo *** \n");
    printf("*** 2. Recorrido del Caballo   *** \n");
    printf("*** 3. Salir                   *** \n");

    scanf("%d", &val);
    
    return val;
}

void printTableroSolucionRecorrido(){
    int cont = 8;
    system("clear");
    
     printf("\n\n*** Recorriendo solucion paso a paso...  \n\n");

    for (int x = 0; x < 8; x++) {
        printf("%d ", cont);
        cont--;
            for (int y = 0; y < 8; y++)
                printf("| %2c ", matrizCasillas[x][y].caballo);
        printf("| \n");
    }
    printf("%s", "     A    B    C    D    E    F    G    H");
    return;
}

void error(char* val){
    printf("\nError! "); 
    printf("%s", val);
    espera();
}

void mensaje(char* val){
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
    return;
}