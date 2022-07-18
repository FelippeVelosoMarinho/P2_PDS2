#include "../include/forma.h"

Forma::Forma(
  std::string cor,
  std::string nome
): _cor(cor), _nome(nome) {
}

std::string Forma::get_nome() {
  return _nome;
}

std::string Forma::get_cor() {
  return _cor;
}