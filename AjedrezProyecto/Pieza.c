/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Pieza.h"

Pieza* newPieza(){
    Pieza *pi = (Pieza*) malloc(sizeof(Pieza));
    if (pi == NULL) {
        return NULL;
    }
    return pi;
}