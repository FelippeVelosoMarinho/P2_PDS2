#ifndef PDS2_FORMA_HPP
#define PDS2_FORMA_HPP

#include <iostream>
#include <string>
#include <math.h>

/*
A interface mais abstrata, Forma, deve ter dois métodos:
std::string get_cor() e std::string get_nome(). A mesma tem
duas sub-interfaces: Forma2D e Forma3D. A primeira, deve
conter os métodos double get_area() e double
get_perimetro(). A segunda tem um único método double
get_volume(). Implemente as classes: Quadrado, Circulo,
Triangulo, Esfera e Cubo. Implemente os métodos: double
get_area(), double get_perimetro() e double get_volume().
*/

class Forma {
  private:
    std::string _cor;
    std::string _nome;
  public:
    Forma(std::string cor, std::string nome);
    std::string get_nome();
    std::string get_cor();
};

#endif