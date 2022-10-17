
/*
 *
 */

#include "parts.h"

Parts::Parts(std::string name, int quantity)
    : m_name(name)
    , m_quantity(quantity)
{}

std::string Parts::getName()
{
    return m_name;
}

int Parts::getQuantity()
{
    return m_quantity;
}
