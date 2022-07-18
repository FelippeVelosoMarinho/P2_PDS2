#include "../include/forma.h"
#include "../include/forma3d.h"
#include "../include/cubo.h"

Cubo::Cubo(
  std::string cor,
  double lado
): Forma3D(cor, "cubo"),
   _lado(lado) {
}

double Cubo::get_volume(){
  return _lado*_lado*_lado;
}