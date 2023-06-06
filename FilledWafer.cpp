#include <string>
#include "Cracker.hpp"
#include "FilledWafer.hpp"

using namespace std;

FilledWafer::FilledWafer(string tipo, string recheio, int unidades, double valor) : Cracker(tipo, unidades, valor)
   {
   this->recheio = recheio;
   };
   
string FilledWafer::getDescricao()
   { 
   return ("Bolacha Recheada com " + recheio + " - " + Cracker::getDescricao()); 
   };
   