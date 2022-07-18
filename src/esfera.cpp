#include "../include/forma.h"
#include "../include/forma3d.h"
#include "../include/esfera.h"

Esfera::Esfera(
  std::string cor,
  double raio
): Forma3D(cor, "esfera"),
   _raio(raio) {
}

double Esfera::get_volume(){
  return 4 * PI * pow(_raio, 3)/3;
}