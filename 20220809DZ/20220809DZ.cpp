#include <iostream>
#include "ClassBlock.h"

int main()
{
    ClassBlock A{10};
    A++.show();
    ++A;
    A.show();
    A--;

    std::cout << A.getSize() << "\n\n";
    std::cout << A.getValueByIndex(5) << "\n\n";
    A.setValueByIndex(5, 40);
    std::cout << A.getValueByIndex(5) << "\n\n";
    
    A--;
    A.pushBack(20);
    std::cout << A.searchValue(20) << "\n\n";
    A.show();
}
