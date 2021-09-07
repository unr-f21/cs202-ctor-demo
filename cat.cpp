//
// Created by Keith Lancaster on 9/7/21.
//
#include "cat.h"


Cat::Cat(const Cat &rhs) {
    std::cout << "in the copy constructor" << std::endl;
}

Cat::Cat(int newAge = 0) : age(newAge) { // initialization list
}

void Cat::speak() {
    std::cout << "meow" << std::endl;
}


int Cat::getAge() const {
    return age;
}

void Cat::setAge(int newAge) {
    age = newAge;
}


