
#include <string>
#include "beer.hpp"
#include "heineken.hpp"

using namespace std;

Heineken::Heineken(string brandy, float volume,string marca, string tipo, double valor) : Beer(marca,tipo, valor){
			this->volume = volume;
			this->brandy= brandy;
};

string Heineken::getDescricao()
{
    return( "Heineken "+ brandy + " " + to_string(volume) + " ml");
};

