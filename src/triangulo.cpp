#include "../include/forma.h"
#include "../include/forma2d.h"
#include "../include/triangulo.h"

Triangulo::Triangulo(
  std::string cor,
  double base,
  double altura,
  double comprimento
): Forma2D(cor, "triangulo"),
   _base(base), _altura(altura), _comprimento(comprimento) {
}

double Triangulo::get_perimetro(){
  return _base + _altura + _comprimento;
}

double Triangulo::get_area(){
  double p = (_base + _altura + _comprimento)/2;
  return sqrt(p*((p-_base)*(p-_altura)*(p-_comprimento)));
}