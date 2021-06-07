/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Casilla.h"

Casilla* newCasilla(){
    Casilla *pi = (Casilla*) malloc(sizeof(Casilla));
    if (pi == NULL) {
        return NULL;
    }
    return pi;
}