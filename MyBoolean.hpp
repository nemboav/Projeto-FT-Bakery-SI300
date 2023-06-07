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