#include "MyBoolean.hpp"

MyBooleanClass::MyBooleanClass(bool value) : value(value) {}

bool MyBooleanClass::getValue() const {
    return value;
}

void MyBooleanClass::setValue(bool value) {
    this->value = value;
}
