/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jeanc
 *
 * Created on May 25, 2021, 4:12 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "Inicializacion.h"
#include "Impresiones.h"
/*
 * 
 */
int main(int argc, char** argv) {
    
    initTablero();
    jugar();
    
    
    return (EXIT_SUCCESS);
}

