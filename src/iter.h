
/*
 *
 */

#ifndef ITER_H
#define ITER_H

class Iter
{
public:
    Iter();
    ~Iter();
    virtual bool hasNext() = 0;
    virtual void next() = 0;
};

#endif
