#include <string>
#include "Food.hpp"
#include "Cheese.hpp"

using namespace std;

Cheese::Cheese(string tipo, int unidade, double peso) : Food (valor)
{
  this->tipo = tipo;
  this->unidade = unidade;
  this->peso = peso;
};

string Cheese::getDescricao()
  {
    return ("Cheese " + tipo + " - "+ to_string(peso)+ " - " + to_string(unidade) + " Kg.");
  };



