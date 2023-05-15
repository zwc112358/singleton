#include <iostream>
#include "singleton.h"
int main()
{
    Singleton* _insOne = Singleton::getInstance();
    std::cout << _insOne <<std::endl;

    Singleton* _insTwo = Singleton::getInstance();
    std::cout << _insTwo << std::endl;

    Singleton* _insThree = Singleton::getInstance();
    std::cout << _insThree << std::endl;
    return 0;
}