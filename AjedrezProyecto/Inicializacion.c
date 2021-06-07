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
            matrizCasillas[i][j].solucion = -1;
            matrizCasillas[i][j].fila = j;
            matrizCasillas[i][j].columna = i;
            matrizCasillas[i][j].caballo = ' ';

        }
    } 

}


