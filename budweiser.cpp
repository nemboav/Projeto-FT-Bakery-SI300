
#include <string>
#include "beer.hpp"
#include "budweiser.hpp"

using namespace std;

Budweiser::Budweiser(string brandy, float volume,string marca, string tipo, double valor) : Beer(marca,tipo, valor){
			this->volume = volume;
			this->brandy= brandy;
};

string Budweiser::getDescricao()
{
    return( "Budweiser "+ brandy + " " + to_string(volume) + " ml");
};

