#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Ponto2D.hpp"

struct Triangulo {
    Ponto2D A, B, C;

    Triangulo(Ponto2D p1, Ponto2D p2, Ponto2D p3);
    double calcular_area();
    double calcular_perimetro();
    int comparar_area(Triangulo *triangulo);

};
#endif