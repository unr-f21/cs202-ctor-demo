#include <iostream>

class Cat {
public:
    void speak() {
        std::cout << "meow" << std::endl;
    }
};

int main() {
    Cat cat;
    cat.speak();
}