#include <QCoreApplication>
#include <QDebug>
#include <cstdio>
#include <iostream>

#include "strongtype.h"
#include "type.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    StrongType myStrongType(5, Type::Fahrenheit);
    StrongType myStrongTypebis(2, Type::Lenght);

    StrongType result(0);
    result = myStrongType + myStrongTypebis;

    std::cout << result.get_value() << std::endl;
    qDebug() << "Hello world";
    std::getchar();


    return a.exec();
}

