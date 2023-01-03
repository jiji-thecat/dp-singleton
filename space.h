#ifndef SPACE_H
#define SPACE_H

#include <QString>

class Space
{
public:
    Space();

    // const関数にすることで、const宣言したオブジェクトから呼び出せるようになる
    virtual QString getImage() const = 0;
};

#endif // SPACE_H
