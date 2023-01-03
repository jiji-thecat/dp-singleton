#ifndef EARTH_H
#define EARTH_H

#include "space.h"
#include <QString>

class Earth : public Space
{
public:
    static Earth *getInstance();
    QString getImage() const;

private:
    Earth();
    // コピーコンストラクタが必要
    Earth(const Earth &x);
    Earth &operator=(const Earth &){ return *this; };
};

#endif // EARTH_H
