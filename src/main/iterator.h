
#ifndef ITERATOR_H_
#define ITERATOR_H_

#include "parts.h"

class Iterator
{
public:
    explicit Iterator() = default;
    virtual ~Iterator() = default;

    virtual bool hasNext() = 0;
    virtual Parts *next() = 0;
};

#endif // ITERATOR_H_
