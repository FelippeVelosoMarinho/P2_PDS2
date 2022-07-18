#ifndef PDS2_TRIANGULO_HPP
#define PDS2_TRIANGULO_HPP

#include "forma.h"
#include "forma2d.h"

class Triangulo : public Forma2D {
  private:
    double _base;
    double _altura;
    double _comprimento;
  public:
    Triangulo(std::string cor, double base, double altura, double comprimento);
    virtual double get_area() override;
    virtual double get_perimetro() override;
};

#endif