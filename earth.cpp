#include "earth.h"
#include <iostream>


Earth &Earth::getInstance(){
    static Earth obj;

    // getInstance 0x1088a03c8
    std::cout << "getInstance " << &obj << std::endl;

    return obj;
}

QString Earth::getImage() const {
    return "chikyuu";
}
