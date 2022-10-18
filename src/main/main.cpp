
/*
 *
 */

#include "machine.h"
#include "iterator.h"
#include <iostream>

int main(int argc, char *argv[])
{
    Machine* pMachine = new Machine();

    // setup
    pMachine->add(new Parts("Main board", 1));
    pMachine->add(new Parts("Sub board", 2));
    pMachine->add(new Parts("Control chip", 5));
    pMachine->add(new Parts("Case", 1));
    pMachine->add(new Parts("LED", 10));
    pMachine->add(new Parts("Power", 2));

    std::cout << "部品名        " << "数量" << std::endl;
    std::cout << "------------------------" << std::endl;

    Iterator *it = pMachine->iterator();
    while(it->hasNext())
    {
        Parts *parts = it->next();
        std::cout << parts->getName() << "\t";
        std::cout << parts->getQuantity() << std::endl;
    }

    delete it;
    delete pMachine;

    return 0;
}
