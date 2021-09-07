#include <iostream>


#include "cat.h"

int main() {
    Cat sarah(10);
    Cat tim(1234);
    Cat fred = tim;
    std::cout << fred.getAge() << std::endl;
    std::cout << tim.getAge() << std::endl;
    tim.setAge(12);
    tim.speak();
}