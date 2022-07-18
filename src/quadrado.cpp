#include "../include/forma.h"
#include "../include/forma2d.h"
#include "../include/quadrado.h"

Quadrado::Quadrado(
  std::string cor,
  double lado
): Forma2D(cor, "quadrado"),
   _lado(lado) {
}

double Quadrado::get_area(){
  return _lado * _lado;
}

double Quadrado::get_perimetro(){
  return 4 * _lado;
}