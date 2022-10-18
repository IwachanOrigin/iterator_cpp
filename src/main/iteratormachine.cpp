
#include "iteratormachine.h"
#include "machine.h"
#include "parts.h"

IteratorMachine::IteratorMachine(Machine* machine)
    : m_pMachine(machine)
    , m_cursor(0)
{}

bool IteratorMachine::hasNext()
{
    if (m_cursor < m_pMachine->size())
    {
        return true;
    }
    return false;
}

Parts* IteratorMachine::next()
{
    Parts* parts = m_pMachine->get(m_cursor);
    m_cursor++;
    return parts;
}
