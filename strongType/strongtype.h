#ifndef STRONGTYPE_H
#define STRONGTYPE_H

#include "type.h"

class StrongType
{

public:
    /* @brief constructor
     */
    StrongType(const double &value, const Type::Enum &type=Type::NoType);

    const double &get_value() const {return _value;}
    const Type::Enum &get_type() const {return _type;}

    void set_value(const double &value){_value = value;}
    void set_type(const Type::Enum &type){_type = type;}
    StrongType operator+(StrongType const &a) const;



private:
    double _value;
    Type::Enum _type;

};



#endif // STRONGTYPE_H
