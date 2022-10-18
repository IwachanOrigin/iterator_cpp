
#ifndef ITERATOR_MACHINE_H_
#define ITERATOR_MACHINE_H_

#include "iterator.h"

class Machine;
class Parts;

class IteratorMachine : public Iterator
{
public:
    IteratorMachine(Machine* machine);
    bool hasNext();
    Parts* next();

private:
    Machine* m_pMachine;
    int m_cursor;
};


#endif // ITERATOR_MACHINE_H_
