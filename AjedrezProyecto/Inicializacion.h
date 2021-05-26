/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inicializacion.h
 * Author: jeanc
 *
 * Created on May 25, 2021, 4:58 PM
 */

#ifndef INICIALIZACION_H
#define INICIALIZACION_H
#include "Tablero.h"

#ifdef __cplusplus
extern "C" {
#endif

extern Pieza **matrizPiezas;
extern int fil;
extern int col;

void initTablero();
Pieza initPieza();
void initPiezas();
void printTablero();
void initPeones();

#ifdef __cplusplus
}
#endif

#endif /* INICIALIZACION_H */

