#ifndef PDS2_FORMA2D_HPP
#define PDS2_FORMA2D_HPP

#include "forma.h"

class Forma2D : public Forma {
  //private:

  public:
    Forma2D(std::string cor, std::string nome);
    virtual double get_area() = 0;
    virtual double get_perimetro() = 0;
};

#endif