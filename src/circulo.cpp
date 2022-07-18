#include "../include/forma.h"
#include "../include/forma2d.h"
#include "../include/circulo.h"

Circulo::Circulo(
  std::string cor,
  double raio
): Forma2D(cor, "circulo"),
   _raio(raio) {
}

double Circulo::get_perimetro(){
  return 2 * PI * _raio;
}

double Circulo::get_area(){
  return PI * _raio * _raio;
}