/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Impresiones.h
 * Author: jeanc
 *
 * Created on May 25, 2021, 6:19 PM
 */

#ifndef IMPRESIONES_H
#define IMPRESIONES_H
#include"Tablero.h"
#ifdef __cplusplus
extern "C" {
#endif
    
extern char x;
extern char y;

extern char destx;
extern char desty;

extern Casilla **matrizCasillas;

void printTablero();
void solicitarMovimiento(char*);
void solicitarMovimientoDestino(char*);

#ifdef __cplusplus
}
#endif

#endif /* IMPRESIONES_H */

