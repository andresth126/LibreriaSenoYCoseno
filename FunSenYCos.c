/*
 * The MIT License
 *
 * Copyright 2021 Andrés Torres <andresth126@gmail.com>.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

float seno(float x){
    int a = 0;
    
    if(x > 1.57 && x <= 3.1416){
        x = 3.1416 - x;
    } else {
        if(x > 3.1416 && x < 4.71){
            x = x - 3.1416;
            a = 1;
        } else {
            if(x > 4.71 && x < 6.2832){
                x = 6.2832 - x;
                a = 1;
            }
        }
    }
    
    float funsen = ((16*x)*(3.1416-x))/((5*9.8696)-((4*x)*(3.1416-x)));
    
    if(a == 1){
        funsen = funsen * -1;
    }
   
    return funsen;
}

float coseno(float x){
    int a = 0;
    
    if(x > 1.57 && x <= 3.1416){
        x = 3.1416 - x;
        a = 1;
    } else {
        if(x > 3.1416 && x < 4.71){
            x = x - 3.1416;
            a = 1;
        } else {
            if(x > 4.71 && x < 6.2832){
                x = 6.2832 - x;
            }
        }
    }
    
    float funcos = ((9.8696)-(4*(x*x)))/((9.8696)+(x*x));
    
    if(a == 1){
        funcos = funcos * -1;
    }
    
    return funcos;
}

/* Función que retorna informacion de la CPU
 * @return un string con la informacion de la CPU
 */

