#ifndef EARTH_H
#define EARTH_H

#include "space.h"
#include <QString>

class Earth : public Space
{
public:
    static Earth &getInstance();
    QString getImage() const;

    // コピーできないようにする
    Earth(const Earth &x) = delete;
    Earth &operator=(const Earth &) = delete;

private:
    Earth() = default;
    ~Earth() = default;

};

#endif // EARTH_H
