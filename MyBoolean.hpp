/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#ifndef MY_BOOLEAN_H
#define MY_BOOLEAN_H

class MyBooleanClass {
private:
    bool value;

public:
    MyBooleanClass(bool value = false);
    bool getValue() const;
    void setValue(bool value);
};

#endif

/* fim de arquivo */