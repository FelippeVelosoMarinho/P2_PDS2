#ifndef PDS2_CIRCULO_HPP
#define PDS2_CIRCULO_HPP

#define PI 3.14159265359

#include "forma.h"
#include "forma2d.h"

class Circulo : public Forma2D {
  private:
    double _raio;
  public:
    Circulo(std::string cor, double raio);
    virtual double get_area() override;
    virtual double get_perimetro() override;
};

#endif