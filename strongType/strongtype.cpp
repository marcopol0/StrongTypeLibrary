#include "strongtype.h"
#include <iostream>


StrongType::StrongType(const double &value, const Type::Enum &type)
{
    _value = value;
    _type = type;
}

StrongType StrongType::operator+(StrongType const& a) const
{
    StrongType resultat(0);
    if(a.get_type() != _type)
    {
        throw "Value has not the same type";
        std::cout << "Value has not the same type";
        return resultat;
    }
    else
    {
        resultat.set_value(a.get_value() + _value);
        resultat.set_type(_type);
        return resultat;
    }
}
