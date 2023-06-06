
#include <string>
#include "beer.hpp"
#include "pilsen.hpp"

using namespace std;

Pilsen::Pilsen(string brandy, float volume,string marca, string tipo, double valor) : Beer(marca,tipo, valor){
			this->volume = volume;
			this->brandy= brandy;
};

string Pilsen::getDescricao()
{
    return( "Pilsen "+ brandy + " " + to_string(volume) + " ml");
};

