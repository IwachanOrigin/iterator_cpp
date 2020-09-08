/*
 *
 */

#ifndef AGGREGATE_H
#define AGGREGATE_H

#include "iter.h"

class Aggregate
{
public:
    Aggregate();
    ~Aggregate();

    virtual Iter iterator() = 0;
    
};

#endif
