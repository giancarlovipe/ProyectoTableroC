/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Inicializacion.h"

void initTablero(){
    newTablero();

    for(int i=0; i<8;i++){
        for(int j=0; j<8; j++){
            matrizPiezas[i][j].color = ' ';
            matrizPiezas[i][j].tipo = ' ';
            matrizPiezas[i][j].fila = j;
            matrizPiezas[i][j].columna = i;
            matrizPiezas[i][j].primeravez = false;
        }
    } 

    initPiezas();
}


void initPeones(){
    for(int j =0; j < 8; j++){
        matrizPiezas[1][j].tipo = 'P';
        matrizPiezas[1][j].color = 'B';  
        
        matrizPiezas[6][j].tipo = 'p';
        matrizPiezas[6][j].color = 'N';  
    }
}


void initPiezas(){
//Torres Blancas
    matrizPiezas[0][0].tipo = 'T';
    matrizPiezas[0][0].color = 'B';
    matrizPiezas[0][7].tipo = 'T';
    matrizPiezas[0][7].color = 'B';
 
//Torres Negras
    matrizPiezas[7][0].tipo = 't';
    matrizPiezas[7][0].color = 'N';
    matrizPiezas[7][7].tipo = 't';
    matrizPiezas[7][7].color = 'N';
    
//Caballos Blancos
    matrizPiezas[0][1].tipo = 'C';
    matrizPiezas[0][1].color = 'B';
    matrizPiezas[0][6].tipo = 'C';
    matrizPiezas[0][6].color = 'B';
    
//Caballos Negros
    matrizPiezas[7][1].tipo = 'c';
    matrizPiezas[7][1].color = 'N';
    matrizPiezas[7][6].tipo = 'c';
    matrizPiezas[7][6].color = 'N';
    
//Alfiles Blancos
    matrizPiezas[0][2].tipo = 'A';
    matrizPiezas[0][2].color = 'B';
    matrizPiezas[0][5].tipo = 'A';
    matrizPiezas[0][5].color = 'B';
    
//Alfiles Negros
    matrizPiezas[7][2].tipo = 'a';
    matrizPiezas[7][2].color = 'N';
    matrizPiezas[7][5].tipo = 'a';
    matrizPiezas[7][5].color = 'N';
    
 //Rey y Reina Blancos
    matrizPiezas[0][3].tipo = 'K';
    matrizPiezas[0][3].color = 'B';
    
    matrizPiezas[0][4].tipo = 'Q';
    matrizPiezas[0][4].color = 'B';
    
//Rey y Reina Negros
    matrizPiezas[7][3].tipo = 'k';
    matrizPiezas[7][3].color = 'N';
    
    matrizPiezas[7][4].tipo = 'q';
    matrizPiezas[7][4].color = 'N'; 
    
//Peones
    initPeones();
}

