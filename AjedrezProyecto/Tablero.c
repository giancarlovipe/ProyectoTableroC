 /* To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Tablero.h"

Casilla **matrizCasillas;
int fil;
int col;

int coorX[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int coorY[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

int posx;
int posy;

int actual;
int antx, anty;

    
void newTablero(){
    fil =8, col=8;
    matrizCasillas = fil * col;
    matrizCasillas = malloc(sizeof(Casilla *) * fil);
    for (int i = 0; i < fil; i++)
    {
       matrizCasillas[i] = malloc(sizeof(Casilla) * col);
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

bool validaPosicion(int x, int y) {
    return (x >= 0 && x < 8 && y >= 0 && y < 8
            && matrizCasillas[x][y].solucion == -1);
}

int creaRuta(int x, int y, int mov, int movx[8], int movy[8]) {
    int val, sigx, sigy;
    
    if (mov == 8 * 8)
        return 1;
 
    for (val = 0; val < 8; val++) {
        sigx = x + movx[val];
        sigy = y + movy[val];
        if (validaPosicion(sigx, sigy)) {
            matrizCasillas[sigx][sigy].solucion = mov;
            if (creaRuta(sigx, sigy, mov + 1,movx, movy) == 1)
                return 1;
            else
                matrizCasillas[sigx][sigy].solucion = -1; 
        }
    }
    return 0;
}

void recorridoPasoAPaso(int actual, int control){
    
    if(actual < 64){
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(matrizCasillas[i][j].solucion == actual){      
                    matrizCasillas[antx][anty].caballo = '*'; 
                    matrizCasillas[i][j].caballo = 'C';
                    printTableroSolucionRecorrido();
                    if(control == 0){ 
                        espera();
                    }
                    if(control == 1){
                        sleep(1);
                    }
                    antx = i, anty = j;
                    break;
                }
            }
        }
        recorridoPasoAPaso(actual+1, control);
        
    }
    else {
        mensaje("\nRecorrido finalizado exitosamente! ");
    }
}

void jugar(){
    initTablero();
    
    matrizCasillas[0][0].solucion = 0;
    matrizCasillas[0][0].caballo = 'C';
    
    if (creaRuta(0, 0, 1, coorX, coorY) == 0) {
        error("Error! solucion no existe!");
        return 0;
    }
    else {
        int res = printIniciaSistema();
        antx = 0, anty = 0;
        switch(res){
            case 1:
               recorridoPasoAPaso(0, 0);
               jugar();
               break;
            case 2:
                recorridoPasoAPaso(0, 1);
                jugar();
                break;
            case 3:
                system("clear");
              mensaje("*** Gracias! ***");
                break;
                
            default:
                error("Opcion invalida!");
                jugar();
                break;
            
        }
    }
 
    return 1;
}

void movimiento(int filo, int colo){ 

}

