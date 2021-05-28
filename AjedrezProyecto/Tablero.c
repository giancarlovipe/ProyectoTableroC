/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Tablero.h"

Pieza **matrizPiezas;
int fil;
int col;
int corX;
int corY;
char x;
char y;
char destx;
char desty;
char turno = 'B';

void newTablero(){
    fil =8, col=8;
    matrizPiezas = fil * col;
    matrizPiezas = malloc(sizeof(Pieza *) * fil);
    for (int i = 0; i < fil; i++)
    {
       matrizPiezas[i] = malloc(sizeof(Pieza) * col);
    }
}

bool validaFicha(int x, int y){    
    if (matrizPiezas[x][y].color == turno && matrizPiezas[x][y].tipo != ' '){
        return true;
    } else {
        error("No existe una pieza en esa coordenada o el color de la pieza no es valido!!");
        return false;
    }
}

bool validaRango(int fil, int col){
    if(fil != -1 && col != -1){
        return true;
    } else {
        error("Coordenada incorrecta");
        return false;
    }
}

void jugar(){
    char* color;
    int colorigen =0;
    int filorigen=0;
    
    printTablero();
    
    if(turno == 'B') {
        color = "Blanco";
    }
    else color = "Negro";
    
   
    solicitarMovimiento(color);
    conversionCoordenadas(y, x);
    
    
    if(validaRango(corY,corX)){
       if(validaFicha(corY,corX)){
           colorigen = corX;
           filorigen = corY;
           
           solicitarMovimientoDestino(color);    
           conversionCoordenadas(desty, destx);
           
           if(validaRango(corX,corY)){
               movimiento(filorigen, colorigen);
               printTablero();
               
           }else {
               jugar();
           }
           
       } else {
            jugar();
        }
    } else {
        jugar();
    }
        
    
        
    cambiaTurno();
    
}

void movimiento(int filo, int colo){ 

   matrizPiezas[corY][corX].color = matrizPiezas[filo][colo].color;
   matrizPiezas[corY][corX].tipo = matrizPiezas[filo][colo].tipo;
   matrizPiezas[corY][corX].primeravez = false;
    
   matrizPiezas[filo][colo].color = 'X';
   matrizPiezas[filo][colo].tipo = ' ';
   matrizPiezas[filo][colo].primeravez = true;
}

void cambiaTurno(){
    if(turno == 'B'){
        turno = 'N';
    } else {
        turno = 'B';
    }
}

void conversionCoordenadas(char numero, char letra){ 
    switch(numero){
        case '1':
            corY = 7;
            break;
        case '2':
            corY = 6;
            break;
        case '3':
            corY = 5;
            break;
        case '4':
            corY = 4;
            break;
        case '5':
            corY = 3;
            break;        
        case '6':
            corY = 2;
            break;
        case '7':
            corY = 1;
            break;
        case '8':
            corY = 0;
            break;
        default:
            corY = -1;
            break;     
    }
    
    switch(letra){
        case 'H':
            corX = 7;
            break;
        case 'G':
            corX = 6;
            break;
        case 'F':
            corX = 5;
            break;
        case 'E':
            corX = 4;
            break;
        case 'D':
            corX = 3;
            break;        
        case 'C':
            corX = 2;
            break;
        case 'B':
            corX = 1;
            break;
        case 'A':
            corX = 0;
            break;
        default:
            corX = -1;
            break;     
    }
}

void validaPeon(){
    //if()
}

