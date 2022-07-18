#ifndef PDS2_QUADRADO_HPP
#define PDS2_QUADRADO_HPP

#include "forma.h"
#include "forma2d.h"

class Quadrado : public Forma2D {
  private:
    double _lado;
  public:
    Quadrado(std::string cor, double lado);
    virtual double get_area() override;
    virtual double get_perimetro() override;
};

#endif