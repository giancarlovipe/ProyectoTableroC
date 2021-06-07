/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pieza.h
 * Author: jeanc
 *
 * Created on May 25, 2021, 4:30 PM
 */

#ifndef CASILLA_H
#define CASILLA_H

#ifdef __cplusplus
extern "C" {
#endif

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>
#include <string.h>

typedef struct Casilla {
    int fila;
    int columna;
    int solucion;
    char caballo;
} Casilla;

Casilla* newCasilla();
void deleteCasilla(Casilla*);



#ifdef __cplusplus
}
#endif

#endif /* CASILLA_H */

