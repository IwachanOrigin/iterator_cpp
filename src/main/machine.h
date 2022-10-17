
#ifndef MACHINE_H_
#define MACHINE_H_

#include <vector>
#include "aggregate.h"

class Parts;

class Machine : public Aggregate
{
public:
    explicit Machine() = default;
    ~Machine();

    void add(Parts *parts);
    Parts* get(int index);
    int size();
    Iterator* iterator();

private:
    std::vector<Parts *> m_vectParts;
};

#endif // MACHINE_H_
