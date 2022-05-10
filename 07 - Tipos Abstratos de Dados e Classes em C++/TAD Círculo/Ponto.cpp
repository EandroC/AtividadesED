// Este arquivo está parcialmente implementado. 
// Implemente o restante das operações do TAD Ponto

// Arquivo Ponto.cpp
// Implementacao do TAD Ponto
#include <iostream>
#include <cmath>
#include "Ponto.h"

#include <math.h>

struct Ponto {
    double x;
    double y;
}; 

Ponto *pto_cria(double x, double y){
    Ponto* p = (Ponto *)malloc(sizeof(Ponto));
    if (p == NULL)
    return NULL;
    p->x = x;
    p->y = y;
    return p;
} 

double pto_getX(Ponto *p){
     return p->x;
}

double pto_getY(Ponto *p){
     return p->y;
}

void pto_setX(Ponto *p, double x){
    p->x=x;
}

void pto_setY(Ponto *p, double y){
    p->y=y;
}

double pto_distancia(Ponto* p1, Ponto* p2){
    double dx = p2->x- p1->x;
    double dy = p2->y- p1->y;
    
    return sqrt(dx*dx + dy*dy);


}

// Libera a memoria de um ponto previamente criado
void pto_libera(Ponto *p) { 
    if(p != nullptr) {
        delete p;
        std::cout << "ponto liberado" << std::endl;
    }
} 