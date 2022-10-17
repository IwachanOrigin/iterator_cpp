
/*
 *
 */

#ifndef PARTS_H
#define PARTS_H

#include <string>

class Parts
{
public:
    explicit Parts(std::string name, int quantity);
    ~Parts() = default;
    std::string getName();
    int getQuantity();

private:
    std::string m_name;
    int m_quantity;
};

#endif // PARTS_H
