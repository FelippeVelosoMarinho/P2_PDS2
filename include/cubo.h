#ifndef PDS2_CUBO_HPP
#define PDS2_CUBO_HPP

#include "forma.h"
#include "forma3d.h"

class Cubo : public Forma3D {
  private:
    double _lado;
  public:
    Cubo(std::string cor, double lado);
    virtual double get_volume() override;
};

#endif