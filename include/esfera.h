#ifndef PDS2_ESFERA_HPP
#define PDS2_ESFERA_HPP

#define PI 3.14159265359

#include "forma.h"
#include "forma3d.h"

class Esfera : public Forma3D {
  private:
    double _raio;
  public:
    Esfera(std::string cor, double raio);
    virtual double get_volume() override;
};

#endif