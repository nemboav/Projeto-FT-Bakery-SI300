#include "a02ex01_a.hpp"

   MyBooleanClass::MyBooleanClass()            { booleanValue = false;  };
   MyBooleanClass::MyBooleanClass(bool value ) { booleanValue = value;  };
   MyBooleanClass::~MyBooleanClass()           { booleanValue = false;  };
   
   const bool MyBooleanClass::getStatus(void)  { return(booleanValue);  };