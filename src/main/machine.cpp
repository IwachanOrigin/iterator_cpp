
#include "machine.h"
#include "parts.h"
#include "iteratormachine.h"

Machine::~Machine()
{
    for (int i = 0; i < m_vectParts.size(); i++)
    {
        delete m_vectParts[i];
    }
}

void Machine::add(Parts *pParts)
{
    m_vectParts.push_back(pParts);
}

Parts* Machine::get(int index)
{
    if (index < 0 || index > m_vectParts.size())
    {
        return nullptr;
    }
    return m_vectParts[index];
}

int Machine::size()
{
    return (int)m_vectParts.size();
}

Iterator* Machine::iterator()
{
    return new IteratorMachine(this);
}
