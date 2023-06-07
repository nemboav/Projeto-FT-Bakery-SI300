/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#include "MyBoolean.hpp"

MyBooleanClass::MyBooleanClass(bool value) : value(value) {}

bool MyBooleanClass::getValue() const {
    return value;
}

void MyBooleanClass::setValue(bool value) {
    this->value = value;
}

/* fim de arquivo */