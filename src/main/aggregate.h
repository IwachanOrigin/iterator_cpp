/*
 *
 */

#ifndef AGGREGATE_H
#define AGGREGATE_H

#include "iterator.h"

class Aggregate
{
public:
    explicit Aggregate() = default;
    virtual ~Aggregate() = default;

    virtual Iterator* iterator() = 0;

};

#endif
