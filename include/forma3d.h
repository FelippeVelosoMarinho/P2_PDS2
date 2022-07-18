#ifndef PDS2_FORMA3D_HPP
#define PDS2_FORMA3D_HPP

#include "forma.h"

class Forma3D : public Forma {
  //private:

  public:
    Forma3D(std::string cor, std::string nome);
    virtual double get_volume() = 0;
};

#endif